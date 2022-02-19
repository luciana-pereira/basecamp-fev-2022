/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:41:00 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/11 13:24:31 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
    char str[20] = "W3CSchool";
    char to_find[10] = "Escola";

    printf("substring é: %s\n", ft_strstr(str, to_find));
   
    return (0);
}
