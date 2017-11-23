#include <string.h>

void 	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;

	csrc = (char*)src;
	cdest = (char*)dest;
	while(n--)
		*cdest++ = *csrc++;
	return (dest);
}
