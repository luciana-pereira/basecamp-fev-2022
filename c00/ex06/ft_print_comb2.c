/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:39:26 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/08 16:46:32 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	u;
	int	d;

	u = 0;
	d = 0;
	while (u <= 99)
	{
		d = u + 1;
		while (d <= 99)
		{
			ft_putchar((u / 10) + '0');
			ft_putchar((u % 10) + '0');
			ft_putchar(' ');
			ft_putchar((d / 10) + '0');
			ft_putchar((d % 10) + '0');
			if ((u / 10 != 9) || (u % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		u++;
	}
}
