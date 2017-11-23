#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while (to_find[k])
		k++;
	if (k == 0 || len == 0)
		return ((char *)str);
	if (k > len)
		k = len;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (j == k - 1)
				return ((char *)str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}