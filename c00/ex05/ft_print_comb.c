/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 04:55:12 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/06 00:56:39 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	u;
	int	d;
	int	c;

	u = 48;
	while (u <= 57)
	{
		d = u + 1;
		while (d <= 57)
		{
			c = d + 1;
			while (c <= 57)
			{
				write(1, &u, 1);
				write(1, &d, 1);
				write(1, &c, 1);
				if (u != 55)
					write(1, ", ", 2);
				c++;
			}
			d++;
		}
		u++;
	}
}
