/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:45:18 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/15 05:17:47 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[15] = "@@ -1 +1,39 @@$"; // fornece 15 char
	char	s2[15] = "ABCDEF";
	//unsigned int	byt_size;
	unsigned int	res;

	//byt_size = 3;
	res = ft_strncmp(s1, s2, 4);
	if (res <= 0)
	{
		printf("s1 é menor que s2\n");
	}
	else if (res > 0)
	{
		printf("s2 é menor que s1\n");
	}
	else
	{
		printf("s1 é igual a s2\n");
	}
	return (0);
}
