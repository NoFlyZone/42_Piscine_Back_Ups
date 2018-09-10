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

unsigned int	ft_strlen(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	
	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
	{
		i++;
		k++;
	}
	if (dest[i] == '\0' && i > size)
		k = k + size;
	size--;
	while (j < size && src[j])
	{
		j++;
		k++;
	}
	return (k);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	buffer;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	buffer = ft_strlen(dest, src, size);
	while (dest[i])
		i++;
	size--;
	while (j < size && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (buffer);
}
