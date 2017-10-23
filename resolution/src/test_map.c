/*
** test_map.c for dante in /Users/Romain/Documents/IA/dante/largeur/src
**
** Made by Romain Deguerville
** Login   <Romain@epitech.net>
**
** Started on  Wed May 18 19:57:24 2016 Romain Deguerville
** Last update Fri May 20 11:41:19 2016 Romain Deguerville
*/

#include <unistd.h>
#include <stdio.h>
#include "largeur.h"
#include "struct.h"

void	aff_map_error()
{
  write(2, "Invalid map\n", 12);
  write(2, "./solver [map]\n", 15);
}

void	remp_width(t_map *map, int *a, int *tmp)
{
  int	i;

  i = 0;
  while (map->map != NULL && map->map[i] != '\0' && map->map[i] != '\n')
    {
      map->width = map->width + 1;
      i = i + 1;
    }
  *a = 0;
  *tmp = 0;
}

int	test_map(t_map *map)
{
  int	i;
  int	tmp;

  remp_width(map, &i, &tmp);
  while (map->map != NULL && map->map[i] != '\0')
    {
      if (map->map[i] != '*' && map->map[i] != 'X' && map->map[i] != '\n')
	{
	  aff_map_error();
	  return (-1);
	}
      if (map->map[i] == '\n')
	{
	  if (tmp != map->width)
	    {
	      aff_map_error();
	      return (-1);
	    }
	  tmp = -1;
	  map->height = map->height + 1;
	}
      tmp = tmp + 1;
      i = i + 1;
    }
  return (0);
}
