/*
** direction.c for dante in /Users/Romain/Documents/IA/dante/largeur/src
**
** Made by Romain Deguerville
** Login   <Romain@epitech.net>
**
** Started on  Thu May 19 01:05:51 2016 Romain Deguerville
** Last update Fri May 20 00:10:13 2016 Romain Deguerville
*/

#include "struct.h"

int	test_right(t_map *map, int i)
{
  if (map->map[i + 1] != '\0' && map->map[i + 1] == '*')
    return (i + 1);
  else
    return (-1);
}

int	test_left(t_map *map, int i)
{
  if (i > 0 && map->map[i - 1] == '*')
    return (i - 1);
  else
    return (-1);
}

int	test_top(t_map *map, int i)
{
  if (i >= map->width && map->map[i - map->width - 1] == '*')
    return (i - map->width - 1);
  else
    return (-1);
}

int	test_low(t_map *map, int i)
{
  if (i < (map->width + 1) * (map->height + 1) - map->width &&
      map->map[i + map->width + 1] == '*')
    return (i + map->width + 1);
  else
    return (-1);
}
