/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:55:24 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/17 04:20:05 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-8));//-8 = 8 . 7 . 6 . 5 . 4 . 3 . 2 . 1 = ?
	printf("%d\n", ft_iterative_factorial(2));//2! = 2 . 1 = 2
	printf("%d\n", ft_iterative_factorial(10));//10! = 10 . 9 . 8 . 7 . 6 . 5 . 4 . 3 . 2 . 1 = 3.628.800
	printf("%d\n", ft_iterative_factorial(5)); //5! = 5 . 4 . 3 . 2 . 1 = 120
}
