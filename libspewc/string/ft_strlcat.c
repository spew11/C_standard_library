#include "libspewc.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size) {
	size_t dst_len = ft_strlen(dst);
	size_t src_len = ft_strlen(src);
	
	if (size < dst_len + 1) {
		return (size + src_len);
	}
	if (size >= dst_len + 1) {
		size_t i = dst_len;
		while (*src && (i + 1 < size)) {
			dst[i] = *src++;
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len + dst_len);
}
