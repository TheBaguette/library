
#include <unistd.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void    my_put_nbr(int n)
{
  int x;
  int i;
  
  if (n == -2147483648)
    {
      my_putstr("-2147483648");
      return ;
    }
  else
    {
      if (n < 0)
	{
	  my_putchar('-');
	  n = n * (-1);
	}
      i = 1;
      while ((n / i) >= 10)
	i = i * 10;
      while (i > 0)
	{
	  x = (n / i) % 10;
	  my_putchar(48 + x);
	  i = i / 10;
	}
    }
}

