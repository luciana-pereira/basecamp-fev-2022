/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 06:45:50 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/18 07:31:50 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			c = 0;
			while (argv[i][c] != '\0')
			{
				write(1, &argv[i][c], 1);
				c++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
