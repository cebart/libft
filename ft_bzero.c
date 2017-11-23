#include <string.h>

void 	ft_bzero(void *s, size_t n)
{
  char	*m;

  m = (char*)s;
  while (n--)
  {
      *m = '\0';
	  m++;
  }
}