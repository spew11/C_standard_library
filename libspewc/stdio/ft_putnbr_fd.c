#include "libspewc.h"

static int	ft_putnbr_fd_recursive(long num, int fd) {
	int	res = 0;
	if (num == 0) {
		return 0;
	}
	res += ft_putnbr_fd_recursive(num / 10, fd);
	res += ft_putchar_fd((num % 10 + '0'), fd);
	return res;
}

int	ft_putnbr_fd(int n, int fd) {
	int res = 0;
	long num = n;
	if (n == 0) {
		return ft_putchar_fd('0', fd);
	}
	if (n < 0) {
		num *= -1;
		res += ft_putchar_fd('-', fd);
	}
	res += ft_putnbr_fd_recursive(num, fd);
	return res;
}
