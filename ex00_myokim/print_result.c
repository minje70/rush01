/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:57:25 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/09 21:33:57 by mijeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_result(int **grid)
{
	int	i;
	int	j;
	char temp_char;

	j = 1;
	while (j < 5)
	{
		i = 1;
		while (i < 5)
		{
			temp_char = grid[j][i] + '0';
			write(1, &temp_char, 1);
			write(1, " ", 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}
