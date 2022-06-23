#include "libspewc.h"

char	*ft_strdup(const char *s) {
	char	*dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	ft_strlcpy(dest, (char *)s, ft_strlen(s) + 1);
	return dest;
}
