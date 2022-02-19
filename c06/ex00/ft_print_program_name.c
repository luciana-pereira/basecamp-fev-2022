/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 05:08:56 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/18 07:31:19 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	b;

	b = 0;
	if (argc > 0)
	{
		while (argv[0][b] != '\0')
		{
			write(1, &argv[0][b], 1);
			b++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
