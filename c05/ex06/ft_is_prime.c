/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:56:12 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/18 02:26:24 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	b;

	b = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (b <= nb / 2)
	{
		if (nb % b == 0)
		{
			return (0);
		}
		b++;
	}
	return (1);
}
