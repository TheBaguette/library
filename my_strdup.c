
#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c);
char	*my_strdup(char *str)
{
  int i;
  char* new;

  i = 0;
  while (*str)
    {
      i = i + 1;
      str = str + 1;
    }
  str = str - i;
  new = malloc(i * (sizeof(*new) + 1));
  while (*str)
    {
      *new = *str;
      new = new + 1;
      str = str + 1;
    }
  *new = '\0';
  return(new - i);
}
