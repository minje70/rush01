/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 16:54:12 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/08 20:19:47 by mijeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	grid_input_init(char **argv, int **grid);
void	grid_init(int **grid);

void	grid_init(int **grid)
{
	int	i;
	int	j;

	j = 0;
	while (j < 6)
	{
		i = 0;
		while (i < 6)
		{
			grid[j][i] = 0;
			if (i > 0 && i < 5 && j > 0 && j < 5)
				grid[j][i] = i;
			i++;
		}
		j++;
	}
}

void	grid_input_init(char **argv, int **grid)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < 5)
	{
		grid[0][i] = argv[1][j] - '0';
		grid[5][i] = argv[1][j + 8] - '0';
		i++;
		j += 2;
	}
	i = 1;
	j = 16;
	while (i < 5)
	{
		grid[i][0] = argv[1][j] - '0';
		grid[i][5] = argv[1][j + 8] - '0';
		i++;
		j += 2;
	}
}
