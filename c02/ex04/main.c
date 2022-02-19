/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 05:15:29 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/09 05:23:05 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	//char	*str = "abcdefghijklm";
	char *str = "ABCDEFGH";
	//char *str = "";
	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}
