/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:36:24 by mvavasso          #+#    #+#             */
/*   Updated: 2022/02/06 14:25:52 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ifelse(int b, int c, int x, int y)
{
	if ((c == 1 && b == 1) || (c == y && b == x && x != 1 && y != 1))
	{
		ft_putchar(47);
	}
	else if ((b == 1 && c == y && y != 1) || (c == 1 && b == x))
	{
		ft_putchar('\\');
	}
	else if (b == 1 || b == x || c == 1 || c == y)
	{
		ft_putchar(42);
	}
	else
	{
		ft_putchar(32);
	}
}

void	rush(int x, int y)
{
	int	b;
	int	c;

	if (x >= 1 && y >= 1)
	{
		c = 1;
		while (c <= y)
		{
			b = 1;
			while (b <= x)
			{
				ifelse(b, c, x, y);
				b++;
			}
			ft_putchar('\n');
			c++;
		}
	}
}
