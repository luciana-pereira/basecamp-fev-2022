/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:39:19 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/14 02:01:19 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//diretiva que informa que toda vez que compilar e ele encontrar o nome da macro como LINES ele deve substituir pela sequencia de caracteres fornecida
#define ROW 4
#define COLUMN 4
#include <stdio.h>
#include <stdlib.h>

//alocação de memoria
int **ft_allocate_matrix(int n_lines, int n_columns)
{
	int line;
	int **matrix;

	matrix = malloc(sizeof(int *) * n_lines);
	line = 0;
	n_lines = 4;
	while (line < n_lines)
	{
		n_columns = 4;
		matrix[line] = malloc(sizeof(int) * n_columns);
		line++;
	}
	return matrix;
}

//libera alocação da memoria
void ft_free_matrix(int **matrix, int n_lines)
{
	int line;
	
	line = 0;
	while (line < n_lines)
	{
		free(matrix[line]);
		line++;
	}
	free(matrix);
}

int main(int argc, char *argv[])
{
	int **matrix;
	int line;
	int column;
	int index;
	int str;

	line = 0;
	index = 1;
	matrix = ft_allocate_matrix(ROW, COLUMN);
	while (line < ROW)
	{
		column = 0;
		while (column < COLUMN)
		{
			str = atoi(argv[index]);
			matrix[line][column] = str;
			printf("%d", matrix[line][column]);
			index++;
			column++;
		}
		printf("\n");
		line++;
	}
	ft_free_matrix(matrix, ROW);
}

