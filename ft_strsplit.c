# include "libft.h"

static unsigned int		ft_countw(char const *s, char c)
{
	unsigned int w;

	w = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			w++;
		while (*s != c && *s)
			s++;
	}
	return (w);
}

static char 			**ft_wrdsalloc(char const *s, char c, char **tab, unsigned int w)
{
	size_t	        i;
	unsigned int 	j;

	j = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		if(!(tab[j] = ft_strnew(i + 1)))
            return (NULL);
		j++;
	}
	if(j <= w)
        if(!(tab[j] = ft_strnew(1)))
            return (NULL);
	return (tab);
}

static char 			**ft_tabfill(char const *s, char c, char **tab)
{
	int	            i;
	unsigned int 	j;

	j = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			tab[j][i] = *s;
			s++;
			i++;
		}
		tab[j][i] = '\0';
		j++;
	}
	return (tab);
}

char 					**ft_strsplit(char const *s, char c)
{
	unsigned int 	wrds;
	char			**tab;

	wrds = ft_countw(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * wrds + 1)) || !wrds)
		return (NULL);
	if (!(tab = ft_wrdsalloc(s, c, tab, wrds)))
        return (NULL);
	tab = ft_tabfill(s, c, tab);
	return (tab);
}