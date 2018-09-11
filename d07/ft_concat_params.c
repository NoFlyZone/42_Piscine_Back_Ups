/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:46:03 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/11 13:07:03 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 1;
	while (i < argc)
	{
		j= 0;
		while (argv[i][j])
		{
			k++;
			j++;
		}
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		size;
	int		i;
	int		j;
	int		k;

	size = ft_strlen(argc, argv);
	if(!(str = (char*)malloc(sizeof(str) * (argc - 1))))
		return (0);
	k = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		if (i != argc - 1)
			str[k] = '\n';
		k++;
		i++;
	}
	return (str);
}
