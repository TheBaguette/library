
#include <unistd.h>

void	my_putchar(char c);
char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	j;
  
  i = 0;
  while (str1[i])
    {
      i = i + 1;
    }
  for (j = 0; j < n && str2[j]; j++)
    {
      str1[i + j] = str2[j];
    }
  str1[i + j] = '\0';
  
  return (str1);
}
