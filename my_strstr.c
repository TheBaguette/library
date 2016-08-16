
#include <unistd.h>
#include <stdio.h>
void	my_putchar(char c);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strstr(char *str, char *to_find)
{
  int	n;
  int	i;

  n = 0;
  i = 0;
  while (str[n])
    {
      if (str[n] == to_find[i])
	{
	  i = i + 1;
	}
      else
	{
	  i = 0;
	}
      if (to_find[i] == '\0')
	{
	  n = n - (i - 1);
	  return(str + n);
	}
      n = n + 1;
    }
  return("null");
}
 
