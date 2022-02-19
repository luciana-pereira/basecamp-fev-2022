/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 03:21:43 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/11 05:28:20 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
   char src[40] = "This is w3cschool.cc";
   char dest[12];
  
   memset(dest, '\0', sizeof(dest)); //limpar o conteudo da memoria

   printf("seqüência de destino final： %s\n", ft_strncpy(dest, src, 10));
   
   return(0);
}
