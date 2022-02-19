/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:43:03 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/10 04:15:11 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "Ola";
	char	s2[] = "Tudo bem?";
	int	res;

	printf("As strings são '%s' e '%s'\n", s1, s2);
	res = ft_strcmp(s1, s2);
	printf("Result: %d\n", res);
	return (0);
}
