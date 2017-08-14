/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:23:29 by caroua            #+#    #+#             */
/*   Updated: 2017/08/14 19:23:32 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	ft_kvalide(int k, int sudoku[9][9], int i, int j)
{
	if (k == -1)
		return (0);
	if (k > 0)
	{
		if (ft_free_line(k, sudoku, i) == 0
		|| ft_free_column(k, sudoku, j) == 0
		|| ft_free_bloc(k, sudoku, i, j) == 0)
			return (0);
	}
	return (1);
}

int	ft_validation(int sudoku[9][9])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			k = sudoku[i][j];
			sudoku[i][j] = 0;
			if (ft_kvalide(k, sudoku, i, j) == 0)
				return (0);
			sudoku[i][j] = k;
			j++;
		}
		i++;
	}
	return (1);
}
