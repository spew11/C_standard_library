#include "libspewc.h"

void	*ft_memmove(void *dst, const void *src, size_t len) {
	if (dst == src || len == 0) {
		return dst;
	}
	if (dst > src) {
		while (len--) {
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
		return dst;
	}
	for (size_t i = 0; i < len; i++) {
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return dst;
}
