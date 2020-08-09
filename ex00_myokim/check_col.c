/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:30:50 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/08 22:25:23 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_up_col(int **grid, int i);
int check_down_col(int **grid, int i);

int	check_up_col(int **grid, int i)
{
	int	j;
	int	count;
	int	temp;

	count = 1;
	j = 1;
	temp = grid[1][i];
	while (j < 4)
	{
		if (temp < grid[j + 1][i])
		{
			count++;
			temp = grid[j + 1][i];
		}
		j++;
	}
	if (count != grid[0][i])
		return (0);
	return (1);
}

int	check_down_col(int **grid, int i)
{
	int	j;
	int	count;
	int	temp;

	count = 1;
	j = 4;
	temp = grid[4][i];
	while (j > 1)
	{
		if (temp < grid[j - 1][i])
		{
			count++;
			temp = grid[j - 1][i];
		}
		j--;
	}
	if (count != grid[5][i])
		return (0);
	return (1);
}
