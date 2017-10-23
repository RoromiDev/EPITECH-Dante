/*
** generateur.h for dante in /Users/romain/Documents/IA/dante/generateur/include
**
** Made by Deguerville Romain
** Login   <romain@epitech.net>
**
** Started on  Tue May 03 13:59:19 2016 Deguerville Romain
** Last update Sun May 22 17:12:09 2016 Romain Deguerville
*/

#ifndef GENERATEUR_H_
# define GENERATEUR_H_

#include "struct.h"

int	error_arg(int, char **);
int	initialisation(t_map *, char **);
void	generate(t_map *);
void	aff_map(t_map *);
void	imparfait(t_map *);
void	one_road(t_map *);

#endif /* !GENERATEUR_H_ */
