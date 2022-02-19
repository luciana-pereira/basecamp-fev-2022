/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:01:22 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/07 18:29:45 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	str[6];

	str[0] = 'P';
	str[1] = 'a';
	str[2] = 's';
	str[3] = 's';
	str[4] = 'e';
	str[5] = 'i';
	ft_putstr(&str[0]);
	write(1, "\n", 1);
	return (0);
}
