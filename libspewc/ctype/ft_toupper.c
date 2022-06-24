int	ft_toupper(int c) {
	char c1 = (char)c;
	if (c1 >= 'a' && c1 <= 'z')
		c1 -= 'a' - 'A';
	return c1;
}
