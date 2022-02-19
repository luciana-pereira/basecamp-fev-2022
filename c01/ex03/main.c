/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 05:52:30 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/06 06:05:56 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 33;
	printf("Divisão %d / %d", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("\nResultado da divisão %d\n", div);
	printf("Modulo %d \n", mod);
	return (0);
}
