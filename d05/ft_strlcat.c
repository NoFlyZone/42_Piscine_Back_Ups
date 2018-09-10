/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:26:04 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/10 14:15:20 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	size--;
	while (j < size && dest[i])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	i = 0;
	while (dest[i])
		i++;
	return (i);
}
