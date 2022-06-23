#include "libspewc.h"

static size_t find_this_word_len(const char *str, char delimiter) {
	size_t len = 0;
	while (str[len] && str[len] != delimiter) {
		len++;
	}
	return len;
}

static int	get_words_cnt(const char *str, char delimiter) {
	int	words_cnt = 0;
	size_t i = 0;
	while (str[i]) {
		i += find_this_word_len(str + i, delimiter);
		words_cnt++;
		while (str[i] && (str[i] == delimiter)) {
			i++;
		}
	}
	return words_cnt;
}

static char	*get_word(const char *str, size_t len) {
	
	char *array = (char *)malloc(sizeof(char) * (len + 1));
	for (size_t i = 0; i < len; i++) {
		array[i] = str[i];
	}
	array[len] = '\0';
	return array;
}

char	**ft_split(char const *s, char delimiter) {
	
	size_t start = 0;
	while (s[start] && s[start] == delimiter) {
		start++;
	}
	int words_cnt = get_words_cnt(s + start, delimiter);
	char **arr = (char **)malloc(sizeof(char *) * (words_cnt + 1));
	size_t arr_idx = 0;
	size_t i = start;
	while (s[i]) {
		size_t word_len = find_this_word_len(s + i, delimiter);
		arr[arr_idx++] = get_word(s + i, word_len);
		i += word_len;
		while (s[i] && (s[i] == delimiter)) {
			i++;
		}
	}
	arr[arr_idx] = 0;
	return arr;
}
