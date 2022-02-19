/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:36:21 by mvavasso          #+#    #+#             */
/*   Updated: 2022/02/06 14:25:26 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ifelse(int b, int c, int x, int y)
{
	if ((b == 1 && c == 1) || (c == y && b == x))
	{
		ft_putchar(111);
	}
	else if ((b == 1 && c == y) || (c == 1 && b == x))
	{
		ft_putchar(111);
	}
	else if (c < y && c != 1 && (b == x || b == 1))
	{
		ft_putchar(124);
	}
	else if (b < x && b != 1 && (c == 1 || c == y))
	{
		ft_putchar(45);
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
