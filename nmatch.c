/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:00:29 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/09 15:55:26 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	return (0);
}

int		main(int argc, char **argv)
{
	printf("%d", nmatch(argv[1], argv[2]));
	return (0);
}
