/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:00:09 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/09 15:51:29 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	return (0);
}

int		main(int argc, char **argv)
{
	printf("%d", match(argv[1], argv[2]));
	return (0);
}
