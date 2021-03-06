/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:52:40 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/19 05:53:09 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int	main(void)
{
	int min;
	int max;
	int *range;

	min = 25;
	max = 20;
	range = ft_range(min, max);
	if (range) {
		int *p = range;
		while (min <= max)
		{
			min++;
			printf("%d\n", *p++);
		}
		free(range);
	}
	return (0);
}
