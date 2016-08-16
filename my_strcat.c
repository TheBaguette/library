
#include <unistd.h>

void	my_putchar(char c);
char	*my_strcat(char *str1, char *str2)
{
  int i;
  int j;
  
  j = 0;
  i = 0;
  while (str1[i])
    {
      i = i + 1;
    }
  for (j = 0;str2[j]; j++)
    {
      str1[i + j] = str2[j];
    }
  str1[i + j] = '\0';
  
  return (str1);
}