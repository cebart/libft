#include "libft.h"

void 	*ft_memalloc(size_t size)
{
	void *res;

	res = (void *)malloc(size);
	if (!res)
		return (NULL);
	ft_bzero(res, size);
    return (res);
}

