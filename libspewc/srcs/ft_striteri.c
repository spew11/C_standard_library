void	ft_striteri(char *s, void (*f)(unsigned int, char *)){
	for (unsigned int i = 0; s[i]; i++) {
		f(i, s + i);
	}
	return ;
}
