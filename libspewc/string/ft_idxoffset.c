#include "libspewc.h"

int	ft_idxoffset(const char *s, int c) {
	for (int i = 0; s[i]; i++) {
		if (s[i] == (char)c) {
			return i;
		}
	}
	return -1;
}
