/*
** struct.h for dante in /Users/romain/Documents/IA/dante/generateur/include
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Tue May 03 14:03:43 2016 Deguerville Romain
** Last update Fri May 20 12:12:43 2016 Romain Deguerville
*/

#ifndef STRUCT_H_
# define STRUCT_H_

typedef struct	s_node
{
  int		pos[4];
  int		current;
  struct s_node	*next;
  struct s_node	*prev;
}		t_node;

typedef struct	s_map
{
  int		height;
  int		width;
  char		*map;
  char		**maze;
  struct s_node *node;
}		t_map;

#endif /* !STRUCT_H_ */
