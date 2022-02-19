/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:39:19 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/14 03:07:30 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//diretiva que informa que toda vez que compilar e ele encontrar o nome da macro como LINES ele deve substituir pela sequencia de caracteres fornecida
#include <stdio.h> //printf
#include <stdlib.h> //malloc
#include <unistd.h> //era para o write 

#define ROW 4
#define COLUMN 4

int	**ft_allocate_matrix(int n_lines, int n_columns)
{
	int	line;
	int	**matrix;

	matrix = malloc(sizeof(int *) * n_lines);// Aloca um vetor de int, aloca 4 inteiros feito sem cast - malloc retorna um ponteiro sem tipo, porem aqui a utilizamos como uma memoria do tipo int, o q indica que matrix e um ponteiro do tipo de int.
	line = 0;
	n_lines = 4;
	while (line < n_lines)
	{
		n_columns = 4;
		matrix[line] = malloc(sizeof(int) * n_columns);//Aloca 4 inteiros a cada loop
		line++;
	}
	return (matrix);
}

void	ft_free_matrix(int **matrix, int n_lines)
{
	int	line;

	line = 0;
	while (line < n_lines)
	{
		free(matrix[line]);//libera o espaço da memoria alocada a cada interação (vetor)
		line++;
	}
	free(matrix);
}

int	main(int argc, char *argv[])
{
	int	**matrix;//declração do ponteiro
	int	line;
	int	column;

	line = 0;
	argc = 1; // contagem a partir do 1, pois estava passando como primeira posição o 0.
	matrix = ft_allocate_matrix(ROW, COLUMN);
	while (line < ROW) //enquanto for menor que 4 continua interando.
	{
		column = 0;
		while (column < COLUMN)
		{   //um ponteiro com 4 linhas e 4 colunas - cria uma matriz 4x4
			matrix[line][column] = atoi(argv[argc]); //declaração dinamica da matriz //utilizamos o atoi para converter para um inteiro. // sem atoi estava imprimindo um losango com o ponto de interrogação no meio.
			printf("%d", matrix[line][column]);
			argc++;
			column++;
		}
		printf("\n");//intera 4x e quebra a linha.
		line++;
	}
	ft_free_matrix(matrix, ROW);//liberação da memoria alocada dinamicamente no programa.
}
