#include "libspewc.h"

int	ft_indexof(const char *s, char c) {
	for (int i = 0; s[i]; i++) {
		if (s[i] == c) {
			return i;
		}
	}
	return -1;
}
