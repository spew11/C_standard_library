int	ft_isascii(int c) {
	char c1 = (char)c;
	return (c1 >= 0 && c1 <= 127);
}
