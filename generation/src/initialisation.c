/*
** initialisation.c for dante in /Users/romain/Documents/IA/dante/generateur
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Tue May 03 14:07:57 2016 Deguerville Romain
** Last update Thu May 05 02:11:22 2016 Deguerville Romain
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "struct.h"

int	init_map(t_map *map)
{
  int	i;

  i = 0;
  if ((map->map = malloc(sizeof(char) * (map->height * map->width + 1)))
      == NULL)
    {
      write(2, "Error malloc\n", 13);
      return (-1);
    }
  while (i < map->height * map->width)
    {
      map->map[i] = 1;
      i = i + 1;
    }
  map->map[map->width + 1] = 0;
  map->map[i] = '\0';
  return (0);
}

int	initialisation(t_map *map, char **argv)
{
  map->height = atoi(argv[2]);
  map->width = atoi(argv[1]);
  if (init_map(map) == -1)
    return (-1);
  return (0);
}
