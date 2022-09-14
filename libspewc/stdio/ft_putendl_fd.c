#include "libspewc.h"

int	ft_putendl_fd(const char *s, int fd) {
	int res = 0;
	res += ft_putstr_fd(s, fd);
	res += ft_putchar_fd('\n', fd);
	return res;
}
