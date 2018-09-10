/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:34:21 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/10 16:44:40 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int j;
	int i;

	if (min >= max)
	{
		range[0] = (int*)malloc(sizeof(range) * 0);
		return (0);
	}
	range[0] = (int*)malloc(sizeof(range) * (max - min));
	i = 0;
	j = min;
	while (j < max)
	{
		range[0][i] = j;
		j++;
		i++;
	}
	return (max - min);
}
