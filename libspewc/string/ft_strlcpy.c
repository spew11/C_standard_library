#include "libspewc.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size) {
	size_t	src_len = ft_strlen(src);
	if (size) {
		size--;
		while (size-- > 0 && *src) {
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return src_len;
}
