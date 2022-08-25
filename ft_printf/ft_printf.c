#include "ft_printf.h"

static int	print_conversion(char c, va_list ap) {
	int	res = 0;
	
	if (c == 'c') {
		res += ft_putchar_fd(va_arg(ap, int), 1);
	}
	else if (c == 's') {
		res += ft_putstr_fd(va_arg(ap, void *), 1);
	}
	else if (c == 'p') {
		res += ft_putptr_fd(va_arg(ap, void *), 1);
	}
	else if (c == 'd' || c == 'i') {
		res += ft_putnbr_fd(va_arg(ap, int), 1);
	}
	else if (c == 'u') {
		res += ft_putunbr_fd(va_arg(ap, int), 1);
	}
	else if (c == 'x' || c == 'X') {
		res += ft_puthex_fd(va_arg(ap, int), c, 1);
	}
	return res;
}

int	ft_printf(const char *format, ...) {
	va_list	ap;
	va_start(ap, format);
	int	res = 0;
	for (int i = 0; format[i]; i++) {
		if (format[i] != '%') {
			res += ft_putchar_fd(format[i], 1);
		}
		else {
			i++;
			if (format[i] == '%') {
				res += ft_putchar_fd(format[i], 1);
			}
			else {
				res += print_conversion(format[i], ap);
			}
		}
	}
	va_end(ap);
	return res;
}
