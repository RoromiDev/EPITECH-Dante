/*
** line_to_maze.c for dante in /Users/Romain/Documents/IA/dante/recursive/src
**
** Made by Romain Deguerville
** Login   <Romain@epitech.net>
**
** Started on  Fri May 20 11:39:12 2016 Romain Deguerville
** Last update Fri May 20 12:13:54 2016 Romain Deguerville
*/

#include <stdlib.h>
#include "struct.h"

void	remp_maze(t_map *map, char **maze)
{
  int	height;
  int	width;
  int	i;

  i = 0;
  height = 0;
  width = 0;
  while (map->map[i] != '\0')
    {
      if (map->map[i] != '\n')
	maze[height][width] = map->map[i];
      else if (map->map[i] == '\n')
	{
	  maze[height][width] = '\0';
	  height = height + 1;
	  width = -1;
	}
      width = width + 1;
      i = i + 1;
    }
}

char	**line_to_maze(t_map *map)
{
  char	**maze;
  int	i;

  i = 0;
  maze = malloc(sizeof(char *) * (map->height + 1));
  while (i < map->height + 1)
    {
      maze[i] =
	  malloc(sizeof(char) * (map->width + 1));
      i = i + 1;
    }
  remp_maze(map, maze);
  return (maze);
}
