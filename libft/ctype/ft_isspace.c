int	ft_isspace(int c) {
	char c1 = (char)c;
	return (c1 == ' ' || c1 == '\f' ||
			c1 == '\n' || c1 == '\r' ||
			c1 == '\t' || c1 == '\v');
}
