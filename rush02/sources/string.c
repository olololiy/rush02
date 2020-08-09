void		ft_strcpy(char *dest, char *start, char *end)
{
	while (start <= end)
		*(dest++) = *(start++);
	*dest = 0;
}

int			ft_strlen(char *str)
{
	int		ret;

	ret = 0;
	while (str[ret])
		++ret;
	return (ret);
}

int			ft_is_equal(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 == *s2);
}