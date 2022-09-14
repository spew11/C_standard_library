int	ft_isalpha(int c) {
	char c1 = (char)c;
	return ((c1 >= 'a' && c1 <= 'z') || (c1 >= 'A' && c1 <= 'Z'));
}
