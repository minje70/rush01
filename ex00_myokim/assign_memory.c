/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:12:56 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/08 17:11:54 by mijeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	assign(int **grid)
{
	int i;

	i = 0;
	while (i < 6)
	{
		grid[i] = (int *)malloc(sizeof(int) * 6);
		i++;
	}
	return (1);
}
