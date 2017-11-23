# include "libft.h"

char 	*ft_strmap(char const *s, char (*f)(char))
{
	char *res;

	res = ft_strnew(ft_strlen(s) + 1);
	while (*s)
		*res++ = f(*s++);
	return (res);
}