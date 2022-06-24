#include "libspewc.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
	size_t arr_len = ft_strlen(s);
	char *arr = (char *)malloc(sizeof(char) * (arr_len + 1));
	for (unsigned int i = 0; s[i]; i++) {
		arr[i] = f(i, s[i]);
	}
	arr[arr_len] = '\0';
	return arr;
}
