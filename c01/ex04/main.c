/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:37:52 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/06 13:58:06 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 3;
	printf("Divisão: %d / %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("\nResultado da divisão: %d\n", a);
	printf("Modulo: %d \n", b);
	return (0);
}
