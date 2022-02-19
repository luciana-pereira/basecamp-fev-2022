/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:00:04 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/10 20:56:34 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src);

int main(void)
{
   
   char src[50] = "efghijkl";
   char dest[50]= "abcd";
   unsigned int nb = 5;
     
   printf("Source string : %s\n", src);
   printf("Destination string : %s", dest);
   ft_strncat(dest, src, nb);
   printf("Result %s\n", dest);
   return (0);
}
