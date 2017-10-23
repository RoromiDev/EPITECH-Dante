/*
** generate.c for dante in /Users/romain/Documents/IA/dante/generateur
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Thu May 05 01:06:21 2016 Deguerville Romain
** Last update Sun May 22 22:08:38 2016 Romain
*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void	imparfait(t_map *map)
{
  int	i;

  i = 1;
  while (map->height * map->width / 2 + i < map->height * map->width &&
	 map->map[map->height * map->width / 2 + i] != 1)
    i = i + 1;
  map->map[map->height * map->width / 2 + i] = 0;
}

void	test_values(t_map *map, int *x, int *y, int *i)
{
  if ((map->gen.new_posx + map->gen.dir_x) > 0 &&
      (map->gen.new_posx + map->gen.dir_x) < map->width &&
      (map->gen.new_posy + map->gen.dir_y) > 0 &&
      (map->gen.new_posy + map->gen.dir_y) < map->height &&
      map->map[map->gen.new_posy * map->width + map->gen.new_posx] == 1 &&
      map->map[(map->gen.new_posy + map->gen.dir_y) * map->width +
      (map->gen.new_posx + map->gen.dir_x)] == 1)
    {
      map->map[map->gen.new_posy * map->width + map->gen.new_posx] = 0;
      map->map[(map->gen.new_posy + map->gen.dir_y) * map->width +
      (map->gen.new_posx + map->gen.dir_x)] = 0;
      map->gen.direction = rand() % 4;
      *x = map->gen.new_posx + map->gen.dir_x;
      *y = map->gen.new_posy + map->gen.dir_y;
      *i = 0;
    }
  else
    {
      map->gen.direction = (map->gen.direction + 1) % 4;
      *i = *i + 1;
    }
}

void	test_dir(t_map *map)
{
  map->gen.dir_x = 0;
  map->gen.dir_y = 0;
  if (map->gen.direction == 0)
    map->gen.dir_x = 1;
  else if (map->gen.direction == 1)
    map->gen.dir_y = 1;
  else if (map->gen.direction == 2)
    map->gen.dir_x = -1;
  else
    map->gen.dir_y = -1;
}

void	remp_laby(t_map *map, int x, int y)
{
  int	i;

  i = 0;
  map->gen.direction = rand() % 4;
  while (i < 4)
    {
      test_dir(map);
      map->gen.new_posx = x + map->gen.dir_x;
      map->gen.new_posy = y + map->gen.dir_y;
      test_values(map, &x, &y, &i);
    }
}

void	generate(t_map *map)
{
  int	x;
  int	y;

  x = 1;
  y = 1;
  while (y < map->height)
    {
      while (x < map->width)
	{
	  remp_laby(map, x, y);
	  x = x + 2;
	}
      y = y + 2;
      x = 1;
    }
  map->map[1] = 0;
  map->map[0] = 0;
  map->map[(map->height - 1) * map->width + (map->width - 2)] = 0;
  map->map[(map->height - 1) * map->width + (map->width - 1)] = 0;
}
