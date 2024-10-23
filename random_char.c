/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:57:43 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/22 23:56:28 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

char  *random_str(int len, char *option) 
{
    char *output;
	int i;
	srand(time(NULL));
	output = malloc(len * sizeof(char));
	i = 0;
	while (i < len) 
	{
		if((option[0] == 'a' || option[0] == 'A') && option[1] == '\0')
			output[i] = option[0] + (rand() % 26);
		if (option[0] == '0' && option[1] == '\0')
			output[i] = option[0] + (rand() % 9);	
		if (option[0] == 'p' && option[1] == '\0')
			output[i] = 32 + (rand() % 94);
		if (option[0] == '\0')
			output[i] = (rand() % 127) + 1;
		i++;
	}
	output[len] = '\0';
	return (output);
}
/*
int main()
{
    printf("Random string lower case     :%s\n", random_str(15, "a"));
    printf("Random string upper case     :%s\n", random_str(15, "A"));
    printf("Random string numbers case   :%s\n", random_str(15, "0"));
    printf("Random string printable ascii:%s\n", random_str(15, "p"));
    printf("Random string all ascii      :%s\n", random_str(15, ""));
    return 0;
}
*/
