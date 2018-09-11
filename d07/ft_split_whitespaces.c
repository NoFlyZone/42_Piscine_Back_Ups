/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:58:02 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/11 15:22:33 by ficoppol         ###   ########.fr       */
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
					|| str[i - 1] == 10 || str[i - 1] == 11
					|| str[i - 1] == 32))
		{
			wrdc++;	
		}
		i++;
	}
	return (wrdc);
}

int		ft_strlen(char *str, int word)
{
	int wrdlen;
	int i;
	int j;

	wrdlen = 0;
	i = 0;
	j = 0;
	while (j != word)
	{
		if (i == 0 && str[i] > 32)
			j++;
		if (str[i] > 32 && (str[i - 1] == 9
					|| str[i - 1] == 10 || str[i - 1] == 11
					|| str[i - 1] == 32))
		{
			j++;	
		}
		i++;
	}
	while (str[i] != 32 || str[i] > 11 || str[i] < 9)
	{
		i++;
		wrdlen++;
	}
	return (wrdlen);
}

void	ft_fill(char *split, char *str, int wrdlen)

char	**ft_split_whitespaces(char *str)
{
	char	**split;
	int		wrdc;
	int		i;
	int		j;

	wrdc = ft_count_words(str);
	if (!(split = (char**)malloc(sizeof(**split) * wrdc + 1)))
		return (0);
	i = 0;
	j = 1;
	while (i < wrdc)
	{
		if(!(split[i] = (char*)malloc(sizeof(*split) * (ft_strlen(str, j) + 1))))
			return (0);
		ft_fill(split[i], str, ft_strlen(str, j));
		i++;
		j++;
	}
	return (split);
}

int		main(int argc, char **argv)
{
	char **split;
	int i;

	i = 0;
	split = ft_split_whitespaces(argv[1]);
	while (i < argc)
	{
		printf("%s", split[i]);
		printf("%c", '\n');
		i++;
	}
	return (0);
}
