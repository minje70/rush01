/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:01:12 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/09 20:42:36 by mijeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		assign(int **grid);
void	print_result(int **grid);
int 	except(char **argv);
void	grid_init(int **grid);
void	grid_input_init(char **argv, int **grid);
void	building(int **grid, int i);

int	main(int argc, char **argv)
{
	int	**grid;
	int	i;

	grid = (int **)malloc(sizeof(int *) * 6);
	if ( argc != 2 || except(argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	assign(grid);
	grid_init(grid);
	grid_input_init(argv, grid);
	building(grid, 1);
	i = 0;
	while (i < 6)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	return (0);
}
