/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:34:02 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/11 13:20:06 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && c < nb)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
   
   char src[50] = "efghijkl";
   char dest[50]= "abcd";
   unsigned int nb = 5;
     
   printf("Source string : %s\n", src);
   printf("Destination string : %s\n", dest);
   ft_strncat(dest, src, nb);
   printf("Result %s\n", dest);
   return (0);
}

