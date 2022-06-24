#include "libspewc.h"

static void fill_array(int n, char *array, int rdx, long num) {
	int arr_idx = 0;
	if (n < 0) {
		array[0] = '-';
		arr_idx = 1;
	}
	while (rdx) {
		array[arr_idx] = num / rdx + '0';
		num -= (num / rdx) * rdx;
		rdx /= 10;
		arr_idx++;
	}
	array[arr_idx] = '\0';
	return;
}

char	*ft_itoa(int n) {
	int		arr_size = 1;
	int		rdx = 1;
	long	num = n;

	if (n < 0) {
		arr_size++;
		num *= -1;
	}
	while (num / rdx >= 10) {
		rdx *= 10;
		arr_size++;
	}
	char *array = (char *)malloc(sizeof(char) * (arr_size + 1));
	fill_array(n, array, rdx, num);
	return array;
}
