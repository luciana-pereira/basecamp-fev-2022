/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:47:27 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/17 22:50:57 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb / 10 == 0)
	{
		ft_putchar('-');
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	if (nb % 10 < 0)
	{
		ft_putchar((nb % 10) * -1 + '0');
	}
	else
	{
		ft_putchar(nb % 10 + '0');
	}
}

#include <stdio.h>

void	ft_putnbr(int nb);

int	main()
{
	ft_putnbr(367800054); //  
	printf("\n");
	ft_putnbr(-2147483648); // <-- nº min. int 
	printf("\n");
	ft_putnbr(2147483647); // <-- nº maximo positivo
	printf("\n");
	ft_putnbr(+253678924);
	printf("\n");
	ft_putnbr(-425); //resta 5
	printf("\n");
	ft_putnbr(-42); //resta 5
	printf("\n");

}