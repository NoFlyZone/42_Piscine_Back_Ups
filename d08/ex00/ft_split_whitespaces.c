/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:00:26 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/18 11:44:01 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int	word;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (i == 0 && str[i] > 32)
			word++;
		else if (str[i] > 32 && (str[i - 1] == '\t' || str[i - 1] == '\v'))
			word++;
		else if (str[i] > 32 && (str[i - 1] == ' ' || str[i - 1] == '\n'))
			word++;
		i++;
	}
	return (word);
}

int		ft_word_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
			&& str[i] != '\v' && str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char	**split;
	int		wordlen;
	int		word;
	int		i;
	int		j;

	j = 0;
	word = ft_count_words(str);
	if (!(split = (char**)malloc(sizeof(char*) * word + 1)))
		return (0);
	i = 0;
	while (j < word)
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\v'
					|| str[i] == '\t' || str[i] == '\n'))
			i++;
		wordlen = ft_word_len(&str[i]);
		if (!(split[j] = (char*)malloc(sizeof(char) * wordlen + 1)))
			return (0);
		split[j] = ft_strncpy(split[j], &str[i], wordlen);
		j++;
		i += wordlen;
	}
	split[j] = 0;
	return (split);
}
