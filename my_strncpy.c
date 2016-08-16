
#include <unistd.h>

void    my_putchar(char c);
char    *my_strncpy(char *dest, char *src, int n)
{
  int	i;
  
  i = 0;
  while (src[i] && i < n )
    {
      dest[i] = src[i];
      i++;
    }
  while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  return (dest);
}
