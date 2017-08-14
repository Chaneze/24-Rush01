/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:21:36 by caroua            #+#    #+#             */
/*   Updated: 2017/08/14 19:21:40 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int g_count;

int	ft_solcount(int grille[9][9], int position)
{
	int	i;
	int	j;
	int	k;

	i = position / 9;
	j = position % 9;
	k = 1;
	if (position == 81)
		g_count++;
	if (grille[i][j] != 0)
		return (ft_solcount(grille, position + 1));
	while (k <= 9)
	{
		if (ft_free_line(k, grille, i) == 1 && ft_free_column(k, grille, j) == 1
				&& ft_free_bloc(k, grille, i, j) == 1)
		{
			grille[i][j] = k;
			ft_solcount(grille, position + 1);
			if (g_count > 1)
				return (0);
		}
		k++;
	}
	grille[i][j] = 0;
	return (g_count);
}
