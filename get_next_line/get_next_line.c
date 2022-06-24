#include "libspewc.h"

static char	*fill_line(char **linebuf, int newline_flag) {
	char	*line;
	char	*tmp;
	if (newline_flag) {
		int line_len = ft_idxoffset(*linebuf, '\n') + 1;
		int linebuf_len = ft_strlen(*linebuf);
		line = ft_substr(*linebuf, 0, line_len);
		tmp = *linebuf;
		*linebuf = ft_substr(*linebuf, line_len, linebuf_len - line_len);
		free(tmp);
		tmp = 0;
	}
	else {
		line = ft_strdup(*linebuf);
		free(*linebuf);
		*linebuf = 0;
	}
	return line;
}

static char	*fill_linebuf(int fd, char *buf, char **linebuf) {
	ssize_t	read_res = 0;
	char	*tmp;
	while (1) {
		ft_bzero(buf, BUFFER_SIZE + 1);
		read_res = read(fd, buf, BUFFER_SIZE);
		if (read_res < 0) {
			return 0;
		}
		if (*linebuf == 0) {
			*linebuf = ft_strdup(buf);
		}
		else {
			tmp = *linebuf;
			*linebuf = ft_strjoin(*linebuf, buf);
			free(tmp);
			tmp = 0;
		}
		if (**linebuf == '\0') {
			free(*linebuf);
			*linebuf = 0;
			return 0;
		}
		if (ft_idxoffset(*linebuf, '\n') != -1) {
			return (fill_line(linebuf, 1));
		}
		else if (read_res == 0 || read_res < BUFFER_SIZE) {
				return (fill_line(linebuf, 0));
		}
	}
}

char	*get_next_line(int fd) {
	static char	*linebuf = 0;
	if (fd < 0) {
		return 0;
	}
	char *buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	char *line = fill_linebuf(fd, buf, &linebuf);
	free(buf);
	return line;
}
