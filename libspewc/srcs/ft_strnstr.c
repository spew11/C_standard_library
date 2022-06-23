#include "libspewc.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len) {
	if (!*needle)
		return (char *)haystack;
	size_t needle_len = ft_strlen(needle);
	for (size_t i = 0; (i <= len - needle_len) && haystack[i]; i++) {
		if (!ft_strncmp(haystack + i, needle, needle_len)) {
			return ((char *)(haystack + i));
		}
	}
	return 0;
}
