/*
** error_arg.c for dante in /Users/romain/Documents/IA/dante/generateur
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Tue May 03 13:53:47 2016 Deguerville Romain
** Last update Wed May 18 18:41:05 2016 Romain Deguerville
*/

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	error_arg(int argc)
{
  if (argc != 2)
    {
      write(2, "Arguments error\n", 16);
      write(2, "./generateur [map]\n", 19);
      return (-1);
    }
  return (0);
}
