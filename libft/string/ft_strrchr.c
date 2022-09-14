#include "libspewc.h"

char	*ft_strrchr(const char *s, int c) {
	size_t	s_len = ft_strlen(s);

	for (size_t i = 0; i < s_len; i++) {
		if (s[s_len - 1 - i]  == (char)c) {
			return ((char *)(s + s_len - 1 - i));
		}
	}
	return 0;
}
