/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:19:07 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/15 18:40:29 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n > i)
	{
		if(s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned)s2[i]);
		}
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{		
		return ((unsigned char)s1[i] - (unsigned)s2[i]);
	}
}
