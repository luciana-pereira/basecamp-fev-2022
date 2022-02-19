/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:11:34 by lucperei          #+#    #+#             */
/*   Updated: 2022/02/18 19:28:10 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *str);

int main(void)
{
	char *str;
	char *copy;

	str = "VaiQuePassa";
	copy = ft_strdup(str);
	printf("%s\n", str);
	printf("%s\n", copy);
	free(copy);
}