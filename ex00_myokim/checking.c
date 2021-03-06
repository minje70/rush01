/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 16:37:33 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/09 22:45:43 by mijeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		look_up(int **grid, int i);
int		check_left_row(int **grid, int i);
int 	check_right_row(int **grid, int i);
void	building(int **grid, int i);
int		check_up_col(int ** grid, int i);
int		check_down_col(int **grid, int i);
void	print_result(int **grid);
int		next_permutation(int *grid);
int		promising(int **grid, int i);
void	check_while(int **grid, int j, int i);

void	temp_init(int **grid, int i)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		grid[i][j] = j + 1;
		j++;
	}
}

void	building(int **grid, int i)
{
    int j;
	int result;

    if (i == 5)
	{
		j = 1;
		check_while(grid, j, i);
	}
	else
	{
		result = promising(grid, i);
		if (result == 0)
			building(grid, i);
		else if (result == 2)
			return ;
		else
			building(grid, i + 1);
		result = promising(grid, i);
	}
}

int		promising(int **grid, int i)
{
	int	key;
	int	j;

	j = 0;
	key = 1;
	if (i == 1)
	{
		if (!(check_left_row(grid, i)) || !(check_right_row(grid, i)))
			key = 0;
	}
	else
	{
    	if(!look_up(grid, i))
		{
			key = 0;
		}
       	if (!(check_left_row(grid, i)) || !(check_right_row(grid, i)))
		{
			key = 0;
    	}
	}
	if (key == 0)
	{
		if (!next_permutation(&grid[i][1]))
		{
			temp_init(grid, i);
			key = 2;
		}
	}
    return key;
}
int		look_up(int **grid, int i)
{
	int	j;
	int save_i;

	j = 1;
	while (j < 5)
	{
		save_i = i;
		while (save_i > 1)
		{
			if (grid[save_i - 1][j] == grid[i][j])
				return (0);
			save_i--;
		}
		j++;
	}
	return (1);
}
void	check_while(int **grid, int j, int i)
{
	while (j < 5)
	{
		if (!check_up_col(grid, j) || !check_down_col(grid, j))
		{
			next_permutation(&grid[i - 1][1]);
			building(grid, i - 1) ;
		}
		j++;
	}
}
