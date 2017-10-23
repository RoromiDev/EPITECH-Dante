/*
** remp_map.c for dante in /Users/Romain/Documents/IA/dante/largeur/src
**
** Made by Romain Deguerville
** Login   <Romain@epitech.net>
**
** Started on  Wed May 18 18:25:38 2016 Romain Deguerville
** Last update Fri May 20 11:25:38 2016 Romain Deguerville
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "struct.h"
#include "largeur.h"

int	remp_map(t_map *map, char *road)
{
  int	fd;
  struct stat s;

  map->map = NULL;
  fd = open(road, O_RDONLY);
  if (fd == -1)
    {
      write(2, "Invalid map\n", 12);
      write(2, "./solver [map]\n", 15);
      return (-1);
    }
  if (stat(road, &s) == -1)
    {
      write(2, "Invalid map\n", 12);
      write(2, "./solver [map]\n", 15);
      return (-1);
    }
  map->map = malloc(sizeof(char) * (s.st_size + 1));
  read(fd, map->map, s.st_size);
  map->map[s.st_size - 1] = '\0';
  return (0);
}
