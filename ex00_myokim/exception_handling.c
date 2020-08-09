/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:09:12 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/09 22:59:49 by mijeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char **argv);
int	ft_check_input(char **argv);
int	ft_check_input2(char **argv);

int	except(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ft_strlen(argv) < 31 || ft_strlen(argv) > 31)
		return (1);
	while (i < 32)
	{
		if (argv[1][i] < '1' || argv[1][i] > '4')
			return (1);
		if (argv[1][j] != ' ' && j < 31)
			return (1);
		i += 2;
		j += 2;
	}
	if (ft_check_input(argv) == 1 || ft_check_input2(argv) == 1)
		return (1);
	return (0);
}

int	ft_strlen(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
		i++;
	return (i);
}

int	ft_check_input(char **argv)
{
	int i;

	i = 0;
	while (i < 23)
	{
		if (argv[1][i] == '1' && argv[1][i + 8] == '1')
		{
			return (1);
		}
		else if (argv[1][i] == '4' && argv[1][i + 8] != '1')
		{
			return (1);
		}
		else if (argv[1][i] == '3' && argv[1][i + 8] >= '3')
		{
			return (1);
		}
		i = i + 2;
		if (i == 8)
		{
			i = 16;
		}
	}
	return (0);
}

int	ft_check_input2(char **argv)
{
	int i;

	i = 0;
	while (i < 15)
	{
		if (i == 0 || i == 14)
		{
			if (argv[1][i] == '1' && argv[1][i + 16] != '1')
				return (1);
		}
		else if (i == 6)
		{
			if (argv[1][i] == '1' && argv[1][i + 18] != '1')
				return (1);
		}
		else if (i == 8)
		{
			if (argv[1][i] == '1' && argv[1][i + 14] != '1')
				return (1);
		}
		i = i + 2;
	}
	return (0);
}
