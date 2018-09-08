/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 11:23:24 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/08 19:26:02 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
			j++;
		}
		else
		{
			if (s2[j] == '*')
			{
				j++;
				while (s1[i] != s2[j])
					i++;
			}
			i++;
		}
	}
	return (s1[i] - s2[j]);
}

int		main(void)
{
	char s1[6] = "Hello";
	char s2[6] = "H*lo";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
