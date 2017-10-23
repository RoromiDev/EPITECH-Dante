/*
** main.c for dante in /Users/romain/Documents/IA/dante/generateur
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Tue May 03 13:52:08 2016 Deguerville Romain
** Last update Sun May 22 18:06:52 2016 Romain Deguerville
*/

#include <ncurses.h>
#include <stdio.h>
#include "largeur.h"
#include "struct.h"

void	finish(t_map *map)
{
  int	height;
  int	width;

  height = 0;
  width = 0;
  while (height < map->height + 1)
    {
      while (width < map->width + 1)
	{
	  if (map->maze[height][width] == 'e')
	    map->maze[height][width] = '*';
	  width = width + 1;
	}
      width = 0;
      height = height + 1;
    }
}

int	resolve(t_map *map, int i, int j)
{
  if (i > map->height || j > map->width || i < 0 || j < 0 ||
      map->maze[i][j] != '*')
    return (-1);
  map->maze[i][j] = 'e';

  if ((i == map->height && j == map->width - 1) ||
      (i + 1 > 0 && resolve(map, i + 1, j)) == 0 ||
      (resolve(map, i, j - 1)) == 0 ||
      (resolve(map, i, j + 1)) == 0 ||
      (resolve(map, i - 1, j)) == 0)
    {
      map->maze[i][j] = 'o';
      return (0);
    }
  return (-1);
}

int	main(int argc, char **argv)
{
  t_map	map;

  ini_size(&map);
  if (error_arg(argc) == -1)
    return (-1);
  if (remp_map(&map, argv[1]) == -1)
    return (-1);
  if (test_map(&map) == -1)
    return (-1);
  map.maze = line_to_maze(&map);
  resolve(&map, 0, 0);
  finish(&map);
  aff_finish(&map);
  return (0);
}
