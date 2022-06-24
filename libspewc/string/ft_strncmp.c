#include "libspewc.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n) {
	unsigned char	*c1 = (unsigned char *)s1;
	unsigned char	*c2 = (unsigned char *)s2;

	for (size_t i = 0; i < n; i++) {
		if (!c1[i] || !c2[i]) {
			return (c1[i] - c2[i]);
		}
		if (c1[i] != c2[i]) {
			return (c1[i] - c2[i]);
		}
	}
	return 0;
}

