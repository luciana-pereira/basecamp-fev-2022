/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:41:08 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/10 20:00:27 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()                
{
    char string1[20] = "Faturamento ";
    char string2[20] = "Horas";

    printf ("%s\n", ft_strcat(string1, string2));
}
