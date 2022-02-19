/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:01:22 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/14 23:08:47 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str1 = "Paralelepipedo";
	
	printf("Está é a string: %s\n", str1);
	printf("Utilizando o strlen: %lu\n", strlen(str1));
	printf("Com a função ft_strlen: %d\n", ft_strlen(str1));
}
