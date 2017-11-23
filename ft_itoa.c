# include "libft.h"

static char	*ft_stalloc(int n, int *l)
{
	char 	*s;
	int		nb;

	nb = n;
	while(nb)
    {
        nb = nb / 10;
        (*l)++;
    }
    if(!n)
        *l = 1;
	if(n < 0)
		(*l)++;
	if(!(s = ft_strnew((size_t)*l)))
		return (NULL);
	return (s);
}

char 		*ft_itoa(int n)
{
	char 	*s;
	int		l;
	int		*ptrl;
    int     ne;

	l = 0;
	ne = 0;
	ptrl = &l;
	if(!(s = ft_stalloc(n, ptrl)))
		return (NULL);
	s[l] = '\0';
	l--;
	if(n < 0)
    {
        ne = 1;
        n = -n;
    }
	while(n)
	{
		s[l] = (n % 10) + '0';
		n = n / 10;
		l--;
	}
    if(!*s)
        *s = '0';
	if(ne)
		s[l] = '-';
	return (s);
}
