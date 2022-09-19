#include "libspewc.h"

static int	ft_puthex_fd_recursive(unsigned int n, char conversion, int fd) {
	int	res = 0;
	char c = '\0';
	if (n == 0) {
		return 0;
	}
	if (conversion == 'x') {
		c = HEXA_LOWER[n % 16];
	}
	else if (conversion == 'X') {
		c = HEXA_UPPER[n % 16];
	}
	res += ft_puthex_fd_recursive(n / 16, conversion, fd);
	res += ft_putchar_fd(c, fd);
	return res;
}

int	ft_puthex_fd(unsigned int n, char conversion, int fd) {
	if (n == 0) {
		return ft_putchar_fd('0', fd);
	}
	return ft_puthex_fd_recursive(n, conversion, fd);
}
