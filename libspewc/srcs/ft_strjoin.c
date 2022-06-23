#include "libspewc.h"

char	*ft_strjoin(char const *s1, char const *s2) {
	size_t arr_len = ft_strlen(s1) + ft_strlen(s2);
	char *arr = (char *)malloc(sizeof(char) * (arr_len + 1));
	ft_strlcpy(arr, s1, arr_len + 1);
	ft_strlcat(arr, s2, arr_len + 1);
	return arr;
}
