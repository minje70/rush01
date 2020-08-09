/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:27:00 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/08 22:22:08 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	check_left_row(int **grid, int i);
int check_right_row(int **grid, int i);

int	check_left_row(int **grid, int i)
{
	int	j;
	int	count;
	int	temp;

	count = 1;
	j = 1;
	temp = grid[i][1];
	while (j < 4)
	{
		if (temp < grid[i][j + 1])
		{
			count++;
			temp = grid[i][j + 1];
		}
		j++;
	}
	if (count != grid[i][0])
		return (0);
	return (1);
}

int	check_right_row(int **grid, int i)
{
	int	j;
	int	count;
	int	temp;

	count = 1;
	j = 4;
	temp = grid[i][4];
	while (j > 1)
	{
		if (temp < grid[i][j - 1])
		{
			count++;
			temp = grid[i][j - 1];
		}
		j--;
	}
	if (count != grid[i][5])
		return (0);
	return (1);
}
