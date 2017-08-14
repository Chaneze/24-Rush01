/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eventre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:56:13 by eventre           #+#    #+#             */
/*   Updated: 2017/08/13 19:16:13 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H
# include <stdlib.h>
# include <unistd.h>

int			ft_verif(char **argv);
int			ft_solcount(int grille[9][9], int position);
int			ft_issudoku(char **argv);
int			ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);
int			ft_free_column(int k, int grille[9][9], int j);
int			ft_free_line(int k, int grille[9][9], int i);
int			ft_free_bloc(int k, int grille[9][9], int i, int j);
void		ft_convert(char **arg, int tab[9][9]);
int			ft_solgrille(int grille[9][9], int position);
void		ft_printsol(int grille[9][9]);
int			ft_validation(int sudoku[9][9]);

#endif
