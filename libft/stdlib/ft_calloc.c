#include "libspewc.h"

void	*ft_calloc(size_t count, size_t size) {
	void	*array = malloc(size * count);
	for (size_t i = 0; i < (size * count); i++) {
		((unsigned char *)array)[i] = 0;
	}
	return array;
}
