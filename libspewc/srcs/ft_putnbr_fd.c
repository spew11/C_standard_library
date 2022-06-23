#include "libspewc.h"

static void	ft_putnbr_fd_recursive(long num, int fd) {
	if (num == 0)
		return ;
	ft_putnbr_fd_recursive(num / 10, fd);
	char c = num % 10 + '0';
	write(fd, &c, 1);
	return ;
}

void	ft_putnbr_fd(int n, int fd) {
	long num = n;
	if (n == 0) {
		write(fd, "0", 1);
		return ;
	}
	if (n < 0) {
		num *= -1;
		write(fd, "-", 1);
	}
	ft_putnbr_fd_recursive(num, fd);
	return ;
}
