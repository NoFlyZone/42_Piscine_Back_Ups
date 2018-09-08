/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:15:36 by ficoppol          #+#    #+#             */
/*   Updated: 2018/09/08 18:23:11 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_check_line(int **sudoku, int line, int col);
int		ft_check_column(int **sudoku, int line, int col);
int		ft_check_grille(int **sudoku, int line, int col);

int		**ft_rush01(int **sudoku, int line,int col)
{
	if (sudoku[line][col] == 0)
	{
		while (line < 9)
		{
			sudoku[line][col]++;
			if (ft_check_line(sudoku, line, col))
			{
				if (ft_check_column(sudoku, line, col))
				{
					if(ft_check_grille(sudoku, line, col))
						ft_rush01(sudoku, line, col + 1);
				}
			}
			if (col > 8)
				line++;
		}
	}
	else
	{
		col++;
	}	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_sudoku(int *str)
{
	int col;

	col = 0;
	while (col < 9)
	{
		ft_putchar((char)str[col] + 48);
		ft_putchar(' ');
		col++;
	}
}

void	ft_putstr(char *str, int n)
{
	write(1, str, n);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		*ft_tab(char *str)
{
	int		*tab;
	int		col;

	tab = (int*)malloc(sizeof(*tab) * 9);
	col = 0;
	while (col < 9)
	{
		if (str[col] == '.')
			tab[col] = 0;
		else
			tab[col] = str[col] - 48;
		col++;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int		**mat;
	int		i;
	int		j;

	mat = (int**)malloc(sizeof(*mat) * 9);
	i = 1;
	if (argc != 10)
	{
		ft_putstr("Error\n", 6);
		return (0);
	}
	while (i < argc)
	{
		if (ft_strlen(argv[i]) != 9)
		{
			ft_putstr("Error\n", 6);
			return (0);
		}
		mat[i] = ft_tab(argv[i]);
		i++;
	}
	i = 1;
	while (i < 9)
	{
		ft_print_sudoku(mat[i]);
		ft_putchar('\n');
		i++;
	}
	free(mat);
	return (0);
}
