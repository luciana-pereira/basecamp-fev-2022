/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:15:41 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/18 23:45:16 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str) // pega o comprimento de src com o index i.
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	int	i;
	int	size;
	char *dest;

	i = 0;
	size = ft_strlen(src);
	dest = (char *)malloc(sizeof(*dest) * (size)); //memoria para a nova string como tamanho obtido para a função strlen.
	while (i < size) //enquanto i não chegar ao comprimento de size sera passado o contedudo de  src para dest.
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // quando chega ao fim do cumprimento da string retorna nulo e retorna a copia.
	return (dest);
}