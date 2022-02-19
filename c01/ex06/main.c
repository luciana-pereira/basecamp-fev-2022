/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:31:48 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/08 18:46:18 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	i;
	char	str[6];

	str[0] = 'P';
	str[1] = 'a';
	str[2] = 's';
	str[3] = 's';
	str[4] = 'e';
	str[5] = 'i';
	i = 0;
	i = ft_strlen(str);
	printf("Tamanho: %d \n", i);
	return (0);
}
