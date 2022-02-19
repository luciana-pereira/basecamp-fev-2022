/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:52:40 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/18 21:56:37 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int	main(void)
{
	int *a;
	int	b;

	b = 0;
	a = ft_range(1, 9);
	while (b < 9)
	{
		printf("%d\n", a[b]);
		b++;
	}
	if (a[b] == a[b - 1])
	{
		printf("Numero máximo incluido no array.");
	}
	return (0);
}