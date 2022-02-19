/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:37:35 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/17 15:12:56 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
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

}
