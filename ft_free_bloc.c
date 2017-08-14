/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_bloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:18:41 by caroua            #+#    #+#             */
/*   Updated: 2017/08/14 19:18:46 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_free_bloc(int k, int grille[9][9], int i, int j)
{
	int	i_bis;
	int	j_bis;

	i_bis = i - (i % 3);
	j_bis = j - (j % 3);
	i = i_bis;
	j = j_bis;
	while (i < i_bis + 3)
	{
		while (j < j_bis + 3)
		{
			if (grille[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
