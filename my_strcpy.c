
#include <unistd.h>

void	my_putchar(char c);
char	*my_strcpy(char *dest, char *src)
{
  int	i;
  
  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
