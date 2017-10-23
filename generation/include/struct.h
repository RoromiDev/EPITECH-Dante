/*
** struct.h for dante in /Users/romain/Documents/IA/dante/generateur/include
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Tue May 03 14:03:43 2016 Deguerville Romain
** Last update Thu May 05 02:10:18 2016 Deguerville Romain
*/

#ifndef STRUCT_H_
# define STRUCT_H_

typedef struct	s_gen
{
  int		direction;
  int		dir_x;
  int		dir_y;
  int		new_posx;
  int		new_posy;
}		t_gen;

typedef struct	s_map
{
  int		height;
  int		width;
  char		*map;
  t_gen		gen;
}		t_map;

#endif /* !STRUCT_H_ */
