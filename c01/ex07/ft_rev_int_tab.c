/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:53:40 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/08 19:00:17 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	value;

	i = 0;
	size--;
	while (i <= size)
	{
		value = tab[i];
		tab[i] = tab[size];
		tab[size] = value;
		i++;
		size--;
	}
}
