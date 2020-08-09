#include "rush02.h"

char		*trim_left(char *str)
{
	while (*str && is_white_space(*str))
		++str;
	return (str);
}

void		trim_right(char *str)
{
	if (!*str)
		return ;
	while (*str)
		{
			++str;
		}
	--str;
	while (is_white_space(*str))
		--str;
	*(++str) = 0;
}

char 		*trim_side(char *str)
{
	char *ret;
	char *start;
	char *end;

	if (!str)
		return (0);
	start = str;
	while (*start && is_white_space(*start))
		++start;
	end = start;
	while (*end)
		++end;
	--end;
	while (is_white_space(*end))
		--end;
	ret = (char*)malloc(end - start + 2);
	ft_strcpy(ret, start, end);
	return (ret);
}

char		*trim_allocate_str(char *str)
{
	char *ret;

	ret = trim_side(str);
	free(str);
	return (ret);
}