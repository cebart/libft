# include "libft.h"

char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *res;
	unsigned int i;
	
	i = 0;
	res = ft_strnew(ft_strlen(s) + 1);
	while (*s)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}