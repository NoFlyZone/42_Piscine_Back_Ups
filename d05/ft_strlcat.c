/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:26:04 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/11 15:14:01 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
	while (i < size && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (buffer);
}

int        main(int ac, char **av)
{
	   char copy[100];

	   strcpy(copy, av[2]);
	   if (ac == 3)
	   {
		   printf("----------dest: %s\n",av[2]);
		   printf("---strcpy dest: %lu\n",strlcat(av[2], av[1], 3));
		   printf("----------dest: %s\n",av[2]);
		   strcpy(av[2], copy);
		   printf("----------dest: %s\n",av[2]);
		   printf("ft_strcpy dest: %u\n",ft_strlcat(av[2], av[1], 3));																	   
		   printf("----------dest: %s\n",av[2]);
	   }
	   return 0;
}
