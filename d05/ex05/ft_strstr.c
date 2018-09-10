/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:38:50 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/07 11:28:24 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;
	int max_len;

	i = 0;
	j = 0;
	max_len = ft_strlen(to_find);
	while (str[i])
	{
		k = i;
		while (str[i] == to_find[j])
		{
			if (j == max_len)
				return (str + k);
			i++;
			j++;
		}
		j = 0;
		i++;
	}
	return ("(null)");
}
