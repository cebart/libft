#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
  char	*m;

  m = (char*)s;
  while (n--)
      *m++ = (char)c;
  return (s);
}