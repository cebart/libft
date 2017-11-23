# include "libft.h"

static int 	ft_isspace(char c)
{
	if(c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char 		*ft_strtrim(char const *s)
{
	unsigned int start;
	unsigned int len;
	char         *sr;

	len = 0;
	start = 0;
	sr = (char *)s;
	sr = sr + (ft_strlen(s) - 1);
	while(ft_isspace(*sr))
	{
		len++;
		sr--;
	}
	while(ft_isspace(s[start]))
		start++;
	len = ft_strlen(s) - start - len;
	if(!(sr = ft_strnew(len)))
		return (NULL);
	sr = ft_strsub(s, start, (size_t)len);
	return (sr);
}