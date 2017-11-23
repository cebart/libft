#include <string.h>

char 	*ft_strchr(const char *s, int c)
{
    char *str;

    str = (char *)s;
    while (*str != '\0')
    {
        if (*str == (char)c)
            return (str);
        str++;
    }
    return (NULL);
}