/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 05:00:03 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/09 05:04:42 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *stc);

int	main(void)
{
	//char *str = "12345drt#";
	//char *str = "12345";
	char *str = "";
	printf("%d\n", ft_str_is_numeric(str));
}
