int	ft_tolower(int c) {
	char c1 = (char)c;
	if (c1 >= 'A' && c1 <= 'Z')
		c1 += 'a' - 'A';
	return c1;
}
