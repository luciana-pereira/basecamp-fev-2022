/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:45:18 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/15 19:50:40 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

// int	main(void)
// {
// 	char	s1[15] = "@@ -1 +1,39 @@$"; // fornece 15 char
// 	char	s2[15] = "ABCDEF";
// 	//unsigned int	byt_size;
// 	unsigned int	res;

// 	//byt_size = 3;
// 	res = ft_strncmp(s1, s2, 4);
// 	if (res <= 0)
// 	{
// 		printf("s1 é menor que s2\n");
// 	}
// 	else if (res > 0)
// 	{
// 		printf("s2 é menor que s1\n");
// 	}
// 	else
// 	{
// 		printf("s1 é igual a s2\n");
// 	}
// 	return (0);
// }

int	main(void)
{
	char	str1[] = "135468*&(";
	char	str2[] = "135468*&(";

	int	size;

	size = 4;
	printf("Igual: %d\n", ft_strncmp(str1, str2, size));
	printf("Igual a original: %d\n", strncmp(str1, str2, size));
	printf("Primeiro maior: %d\n", ft_strncmp(str1, str2, size));
	printf("Primeiro maior original: %d\n", strncmp(str1, str2, size));
	printf("Segundo maior: %d\n", ft_strncmp(str1, str2, size));
	printf("Segundo maior original: %d\n", strncmp(str1, str2, size));

}
