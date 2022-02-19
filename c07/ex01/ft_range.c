/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:35:48 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/19 07:51:41 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	i = 0;
	len = max - min;
	tab = (int *)malloc(sizeof(*tab) * len);
	if (min > max) 
	{
		tab = '\0';
		return (tab);
	}
	else
	{
		while (min <= max)
		{
			tab[i] = min;
			++min;
			++i;
		}
		return(tab);
	}	
}
