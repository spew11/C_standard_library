#include "libspewc.h"

char	*ft_strtrim(char const *s, char const *set) {
	size_t s_len = ft_strlen(s);
	size_t start = 0;
	size_t end = s_len - 1;
	
	while (s[start] && ft_strchr(set, s[start])) {
		start++;
	}
	if (start == s_len) {
		char *arr = (char *)ft_calloc(1, sizeof(char));
		return arr;
	}
	while (s[end] && ft_strrchr(set, s[end])) {
		end--;
	}
	char *arr = ft_substr(s, start, end - start + 1);
	return arr;
}
