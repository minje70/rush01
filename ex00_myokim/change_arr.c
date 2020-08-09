/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_arr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mijeong <minje70@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 20:01:55 by mijeong           #+#    #+#             */
/*   Updated: 2020/08/09 18:39:41 by mijeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int	next_permutation(int *a){
    int i = 3;
    while(i > 0 && a[i] <= a[i-1])
        i -= 1;
    if(i <= 0)
        return 0;
    int j = 3;
    while(a[i-1] >= a[j])
        j -= 1;
    swap( &a[i-1], &a[j]);
    j = 3;
    while(i < j)
	{
        swap(&a[i], &a[j]);
        i +=1;
        j -=1;
    }
    return 1;
}
