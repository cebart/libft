#include <string.h>
# include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
		j++;
	size = size - (j + 1);
	while (src[i] != '\0' && i < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (ft_strlen((char*)dest) + ft_strlen((char*)src));
}