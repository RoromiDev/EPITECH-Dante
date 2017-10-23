/*
** aff.c for dante in /Users/Romain/Documents/IA/dante/bonus/generation/src
**
** Made by Romain Deguerville
** Login   <Romain@epitech.net>
**
** Started on  Sun May 22 17:09:09 2016 Romain Deguerville
** Last update Sun May 22 17:15:29 2016 Romain Deguerville
*/

#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include "struct.h"

void	color1(int height, int width)
{
  init_pair(1, COLOR_RED, COLOR_RED);
  attron(COLOR_PAIR(1));
  mvprintw(height, width, " ");
  attroff(COLOR_PAIR(1));
}

void	color2(int height, int width)
{
  init_pair(2, COLOR_BLUE, COLOR_BLUE);
  attron(COLOR_PAIR(2));
  mvprintw(height, width, " ");
  attroff(COLOR_PAIR(2));
}

void	color3(int height, int width)
{
  init_pair(3, COLOR_GREEN, COLOR_GREEN);
  attron(COLOR_PAIR(3));
  mvprintw(height, width, " ");
  attroff(COLOR_PAIR(3));
}

void	init_curse()
{
  initscr();
  noecho();
  curs_set(FALSE);
  nodelay(stdscr, TRUE);
  start_color();
}

void	aff_finish(t_map *map)
{
  int	height;
  int	width;

  init_curse();
  while (1)
    {
      height = width = 0;
      while (height < map->height + 1)
	{
	  while (width < map->width + 1)
	    {
	      if (map->maze[height][width] == 'o')
		color3(height, width);
	      if (map->maze[height][width] == '*')
		color1(height, width);
	      if (map->maze[height][width] == 'X')
		color2(height, width);
	      width = width + 1;
	    }
	  printw("\n");
	  width = 0;
	  height = height + 1;
	}
      refresh();
    }
}
