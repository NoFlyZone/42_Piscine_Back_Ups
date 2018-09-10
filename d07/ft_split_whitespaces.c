/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:58:02 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/10 18:00:00 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_words(char *str)
{
	int wrdc;
	int i;

	wrdc = 0;
	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] > 32)
			wrdc++;
		if (str[i] > 32 && (str[i - 1] == 9
					|| str[i - 1] == 11 || str[i - 1] == 11
					|| str[i - 1] == 32))
		{
			wrdc++;	
		}
		i++;
	}
	return (wrdc);
}

char	*ft_split_whitespaces(char *str)
{
	printf("%d", ft_count_words(str));
	return (str);
}

int		main(int argc, char **argv)
{
	ft_split_whitespaces(argv[1]);
	return (0);
}
