/*
** error_arg.c for dante in /Users/romain/Documents/IA/dante/generateur
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Tue May 03 13:53:47 2016 Deguerville Romain
** Last update Wed May 18 16:31:29 2016 Romain Deguerville
*/

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	error_arg(int argc, char **argv)
{
  if (argc != 4 ||
      (strcmp(argv[3], "imparfait") != 0 &&
       strcmp(argv[3], "parfait") != 0))
    {
      write(2, "Arguments error\n", 16);
      write(2, "./generateur [height] [width] [parfait/imparfait]\n", 50);
      return (-1);
    }
  return (0);
}
