# include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *sr;

	if(!(sr = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
    sr = ft_strcpy(sr,s1);
	sr = ft_strcat(sr, s2);
	return (sr);
}