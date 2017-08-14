/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solgrille.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:21:58 by caroua            #+#    #+#             */
/*   Updated: 2017/08/14 19:22:02 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	ft_solgrille(int grille[9][9], int position)
{
	int	i;
	int	j;
	int	k;

	i = position / 9;
	j = position % 9;
	k = 1;
	if (position == 81)
		return (1);
	if (grille[i][j] != 0)
		return (ft_solgrille(grille, position + 1));
	while (k <= 9)
	{
		if (ft_free_line(k, grille, i) == 1 && ft_free_column(k, grille, j) == 1
				&& ft_free_bloc(k, grille, i, j) == 1)
		{
			grille[i][j] = k;
			if (ft_solgrille(grille, position + 1) == 1)
				return (1);
		}
		k++;
	}
	grille[i][j] = 0;
	return (0);
}
