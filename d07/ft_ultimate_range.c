/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:34:21 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/11 13:02:38 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;
	int k;

	if (min >= max)
		return (0);
	if(!(tab = (int*)malloc(sizeof(range) * (max - min))))
		return (0);
	i = 0;
	k = min;
	while (k < max)
	{
		tab[i] = k;
		k++;
		i++;
	}
	return (max - min);
}
