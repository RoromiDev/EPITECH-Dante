/*
** my_strlen.c for dante in /Users/Romain/Documents/IA/dante/largeur/src
**
** Made by Romain Deguerville
** Login   <Romain@epitech.net>
**
** Started on  Wed May 18 19:34:28 2016 Romain Deguerville
** Last update Wed May 18 19:38:30 2016 Romain Deguerville
*/

#include <unistd.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str != NULL && str[i] != '\0')
    i = i + 1;
  return (i);
}
