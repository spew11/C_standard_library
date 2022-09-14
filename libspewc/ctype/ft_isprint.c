int	ft_isprint(int c) {
	char c1 = (char)c;
	return (c1 >= 32 && c1 <= 126);
}
