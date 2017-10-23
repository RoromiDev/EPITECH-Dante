/*
** aff_labi.c for dante in /Users/romain/Documents/IA/dante/generateur
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Thu May 05 02:15:46 2016 Deguerville Romain
** Last update Sun May 22 16:53:50 2016 Romain Deguerville
*/

#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include "struct.h"

void	color1()
{
  init_pair(1, COLOR_RED, COLOR_RED);
  attron(COLOR_PAIR(1));
  printw(" ");
  attroff(COLOR_PAIR(1));
}

void	color2()
{
  init_pair(2, COLOR_BLUE, COLOR_BLUE);
  attron(COLOR_PAIR(2));
  printw(" ");
  attroff(COLOR_PAIR(2));
}

void	aff_map(t_map *map)
{
  int	i;

  i = 0;
  initscr();
  noecho();
  curs_set(FALSE);
  nodelay(stdscr, TRUE);
  start_color();
  while (1)
    {
      while (i < map->height * map->width)
	{
	  if (i != 0 && i % map->width == 0)
	    printw("\n");
	  if (map->map[i] == 0)
	    color1();
	  else
	    color2();
	  i = i + 1;
	}
      printw("\n");
      refresh();
    }
}

void	one_road(t_map *map)
{
  int	i;

  i = 0;
  while (i < map->height * map->width)
    {
      map->map[i] = 0;
      i = i + 1;
    }
}
