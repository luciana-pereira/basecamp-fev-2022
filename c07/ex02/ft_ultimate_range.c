/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 05:54:16 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/19 07:41:58 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;
	int *p;

	i = 0;
	len = max - min;
	p = (int *)malloc(sizeof(*p) * len);
	if ( min >= max)
	{
		*range = '\0';
		return (0);
	}
	if (!p)
	{
		return(-1);
	}
	while (min < max)
	{
		p[i] = min;
		++min;
		++i;
	}
	*range = p;
	return(len);
}