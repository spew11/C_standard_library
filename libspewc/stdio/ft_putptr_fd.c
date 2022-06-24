#include "libspewc.h"

static int	get_addr(unsigned long addr, int fd) {
	int	res = 0;
	if (addr == 0) {
		return (ft_putstr_fd("0x", fd));
	}
	res += get_addr(addr / 16, fd);
	res += ft_putchar_fd(HEXA_LOWER[addr % 16], fd);
	return res;
}

int	ft_putptr_fd(void *ptr, int fd) {
	if (!ptr)
		return (ft_putstr_fd("(nil)", fd));
	return (get_addr((unsigned long)ptr, fd));
}
