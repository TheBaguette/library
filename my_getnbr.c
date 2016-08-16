
#include <unistd.h>

void	my_putchar(char c);
int	my_getnbr(char *str)
{
  int	nb_neg;
  int	nb;
  int	i;
  
  nb_neg = 1;

  for (i = 0; str[i] && (str[i] == '+' || str[i] == '-'); i++)
    {
      if (str[i] == '-')
	{
	  nb_neg = nb_neg * -1;
	}
    }
  str = str + i;
  nb = 0;
  for (i = 0; str[i] >= 48  && str[i] <= 57; i++)
    {
      nb = nb * 10;
      nb = nb - (str[i] - 48);
    }
  return (nb * nb_neg * -1);
}
