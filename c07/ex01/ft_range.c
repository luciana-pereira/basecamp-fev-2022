/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:35:48 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/18 20:48:04 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int *p;
	
	i = 0;
	if (min >= max)
	{
		return ((void*)0);
	}
	p = (int *)malloc(sizeof(*p) * (max - min - 1));
	if (p == ((void *)0))
	{
		return ((void *)0);
	}
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}