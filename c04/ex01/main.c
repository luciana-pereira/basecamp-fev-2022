/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:21:25 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/16 03:53:33 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "Passei no teste!";
	ft_putstr(str);
	printf("\n");
	puts(str);
	printf("\n");
}
