/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:00:27 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/08 20:41:06 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[4];
	int	size;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = -3;
	tab[3] = 4;
	size = 4;
	printf("Ordem inicial: %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
    ft_rev_int_tab(&tab[0], size);
    printf("Ordem inversa: %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3]);
    return (0);
}
