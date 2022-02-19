/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:33:37 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/17 23:38:55 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-9)); //O
	printf("%d\n", ft_recursive_factorial(0)); //1
	printf("%d\n", ft_recursive_factorial(4)); //24
	printf("%d\n", ft_recursive_factorial(2)); //2
}