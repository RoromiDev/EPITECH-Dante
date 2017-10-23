/*
** generateur.h for dante in /Users/romain/Documents/IA/dante/generateur/include
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Tue May 03 13:59:19 2016 Deguerville Romain
** Last update Sun May 22 17:12:16 2016 Romain Deguerville
*/

#ifndef LARGEUR_H_
# define LARGEUR_H_

#include "struct.h"

int	error_arg(int);
int	remp_map(t_map *, char *);
int	my_strlen(char *);
char	*my_realloc(char *, char *);
void	ini_size(t_map *);
int	test_map(t_map *);
int	test_right(t_map *, int);
int	test_left(t_map *, int);
int	test_low(t_map *, int);
int	test_top(t_map *, int);
void	check_road(t_map *);
char	**line_to_maze(t_map *);
void	remp_maze(t_map *, char **);
void	aff_finish(t_map *);

#endif /* !LARGEUR_H_ */
