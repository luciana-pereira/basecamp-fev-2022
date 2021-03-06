/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:33:38 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/17 18:23:05 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while ((str[a] == '\t' || str[a] == '\f' || str[a] == '\n' ||
			str[a] == '\v' || str[a] == '\r') || str[a] == ' ' )
	{
		a++;
	}
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
		{
			b *= -1;
		}
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = (str[a] - 48) + (c * 10);
		a++;
	}
	return (c * b);
}
