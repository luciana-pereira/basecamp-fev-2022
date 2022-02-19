/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:52:46 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/18 04:53:24 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int index);

int	main(void)
{
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(23));
	printf("%d\n", ft_find_next_prime(241));
}