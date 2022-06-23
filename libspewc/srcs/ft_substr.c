#include "libspewc.h"

char	*ft_substr(const char* s, size_t start, size_t len) {
	char *sub_str = (char *)malloc(sizeof(char) * (len + 1));
	for (size_t i = 0; i < len; i++) {
		sub_str[i] = s[start + i];
	}
	sub_str[len] = '\0';
	return sub_str;
}
