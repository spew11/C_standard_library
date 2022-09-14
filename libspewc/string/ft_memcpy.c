#include "libspewc.h"

void	*ft_memcpy(void *dst, const void *src, size_t n) {
	if (!dst || !src) {
		return 0;
	}
	for (size_t i = 0; i < n; i++) {
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return dst;
}
