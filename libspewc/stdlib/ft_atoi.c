#include "libspewc.h"

enum order {
	null,
	blank,
	sign,
	digit,
	etc
};

static int	order_of_char(char c) {

	if (ft_isspace(c)) {
		return blank;
	}
	else if (c == '-' || c == '+') {
		return sign;
	}
	else if (ft_isdigit(c)) {
		return digit;
	}
	else {
		return etc;
	}
}

int	ft_atoi(const char *str)
{
	int now_order = null;
	long num = 0;
	int now_sign = 1;

	for (int i = 0; str[i] != '\0'; i++) {
		if (order_of_char(str[i]) >= now_order) {
			now_order = order_of_char(str[i]);
			if (now_order == blank)
				continue;
			else if (now_order == sign){
				if (str[i] == '-')
					now_sign *= -1;
				now_order = digit;
			}
			else if (now_order == digit)
				num = (num * 10) + str[i] - '0';
			else if (now_order == etc)
				break;
		}
		else
			break;
	}
	return (num * now_sign);
}
