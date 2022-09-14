#include "libspewc.h"

char	*ft_strchr(const char *s, int c) {
	if ((char)c == '\0') {
		return ((char *)(s + ft_strlen(s)));
	}
	for (int i = 0; s[i]; i++) {
		if (s[i] == (char)c) {
			return ((char *)(s + i));
		}
	}
	return 0;
}
