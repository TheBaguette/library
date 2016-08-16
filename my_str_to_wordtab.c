
#include <unistd.h>
#include <stdlib.h>
int     my_alphanum(char c)
{
  if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
      return (1);
    }
  else
    {
      return(0);
    }
}
int     my_size(char *str)
{
  int i;
  i = 0;
  while (*str)
    {
      ++str;
      ++i;
    }
  return i;
}
int     my_nb_word(char *str)
{
  char  nb_word;
  nb_word = 0;
  int i;
  i = 0;
  int word;
  word = 0;
  while (str[i])
    {
      word = 0;
      while (my_alphanum(str[i]))
	{
	  word = 1;
	  i = i + 1;
	}
      nb_word += word;
      i = i + 1;
    }
  return (nb_word);
}
int     my_size_word(char *str)
{
  int i;
  i = 0;
  while (str[i] && my_alphanum(str[i]))
    {
      i = i + 1;
    }
  return(i);
}

void    my_putchar(char c);
int     my_alphanum(char c);
int     my_size(char *str);
int     my_nb_word(char *str);
int     my_size_word(char *str);
char    *my_strncpy(char *dest, char *src, int n);
char    **my_str_to_wordtab(char *str)
{
  char  **tab;
  int   nb_word;
  int   my_char;
  int   i;
  int   j;

  i = 0;
  j = 0;
  nb_word = my_nb_word(str);
  tab = malloc((nb_word + 1) * sizeof(char*));
  while (str[i])
    {
      if (!my_alphanum(str[i]))
	i = i + 1;
      else
	{
	  my_char = my_size_word(str + i);
	  tab[j] = malloc((my_char + 1) * sizeof(char));
	  my_strncpy(tab[j], str + i, my_char);
	  j = j + 1;
	  i = i + my_char;
	}
    }
  return (tab);
}
