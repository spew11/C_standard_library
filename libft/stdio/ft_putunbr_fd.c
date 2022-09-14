#include "libspewc.h"

static int	ft_putunbr_fd_recursive(unsigned int n, int fd) {
	int	res = 0;
	if (n == 0) {
		return 0;
	}
	res += ft_putunbr_fd_recursive(n / 10, fd);
	res += ft_putchar_fd((n % 10 + '0'), fd);
	return res;
}

int	ft_putunbr_fd(unsigned int n, int fd) {
	if (n == 0) {
		return (ft_putchar_fd('0', fd));
	}
	return (ft_putunbr_fd_recursive(n, fd));
}
