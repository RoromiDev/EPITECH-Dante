/*
** main.c for dante in /Users/romain/Documents/IA/dante/generateur
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Tue May 03 13:52:08 2016 Deguerville Romain
** Last update Sun May 22 16:44:27 2016 Romain Deguerville
*/

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "generateur.h"
#include "struct.h"

int		main(int argc, char **argv)
{
  t_map		map;

  if (error_arg(argc, argv) == -1)
    return (-1);
  if (initialisation(&map, argv) == -1)
    return (-1);
  generate(&map);
  if (strcmp(argv[3], "imparfait") == 0)
    imparfait(&map);
  if (map.height == 1 || map.width == 1)
    one_road(&map);
  aff_map(&map);
  free(map.map);
  return (0);
}
