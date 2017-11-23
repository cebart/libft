# include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	const char *cs;

	cs = s;
	while(n--)
	{
		if(*cs == (unsigned char)c)
			return ((char *)cs);
        cs++;
	}
	return (NULL);
}
