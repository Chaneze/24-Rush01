/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertargv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:18:17 by caroua            #+#    #+#             */
/*   Updated: 2017/08/14 19:18:24 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

void	ft_convert(char **arg, int tab[9][9])
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 1;
	j = 0;
	while (arg[i])
	{
		while (arg[i][j])
		{
			if (arg[i][j] >= '1' && arg[i][j] <= '9')
				tab[k][j] = arg[i][j] - 48;
			else if (arg[i][j] == '.')
				tab[k][j] = 0;
			else
				tab[k][j] = -1;
			j++;
		}
		k++;
		i++;
		j = 0;
	}
}
