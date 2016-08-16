
#include <unistd.h>

void	my_putchar(char c);
int	my_strncmp(char *s1, char *s2, int n)
{
  while ((*s1 || *s2) && n >= 0)
      {
        if (*s1 < *s2)
	{  
	  return (-1);
	}  
      else if (*s1 > *s2)
	{
	  return (1);
	}
      s1++;
      s2++;
      n = n - 1;
    }
  return (0);
}


