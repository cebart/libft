# include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*csrc;
	char	*cdest;

	csrc = (char*)src;
	cdest = (char*)dest;
	while(n--)
	{
		*cdest = *csrc;
		if(*csrc == (char)c)
			return (cdest++);
        cdest++;
        csrc++;
	}
	return (NULL);
}
