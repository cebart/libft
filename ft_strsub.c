# include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sr;

	if(!(sr = ft_strnew(len + 1)))
		return (NULL);
	while(start--)
		s++;
	sr = ft_strncpy(sr, s, len);
	sr[len] = '\0';
	return (sr);
}
