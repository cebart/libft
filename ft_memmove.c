# include "libft.h"

void 	*ft_memmove(void *dest, const void *src, size_t n)
{
	char 	temp[n];

	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	ft_bzero(temp, n);
	return (dest);
}