/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:17:17 by caroua            #+#    #+#             */
/*   Updated: 2017/08/14 19:17:36 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	main(int argc, char **argv)
{
	int	grille[9][9];
	int	nbsol;
	int i;

	i = argc;
	ft_convert(argv, grille);
	nbsol = ft_solcount(grille, 0);
	if (nbsol != 1 || ft_validation(grille) == 0 || ft_issudoku(argv) == 0)
		ft_putstr("Error\n");
	else
	{
		ft_solgrille(grille, 0);
		ft_printsol(grille);
	}
	return (0);
}
