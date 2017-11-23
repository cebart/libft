#include <string.h>

char 	*ft_strrchr(const char *s, int c)
{
    char *r;

    r = NULL;
    while (*s != '\0')
    {
        if (*s == (char)c)
            r = (char *)s;
        s++;
    }
    return (r);
}