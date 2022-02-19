/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 05:31:30 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/09 05:38:36 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str = "ABCDEFJ";
	//char	*str = "abcdefj";
	//char	*str = "";

	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}