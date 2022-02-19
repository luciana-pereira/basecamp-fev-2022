/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:41:08 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/15 18:44:33 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()                
{
    char string1[] = "Olá ";
    char string2[15] = "Tudo bem bem";

	// strcat(string1, string2);
    printf("%s\n", ft_strcat(string1, string2));
	return (0);
}
