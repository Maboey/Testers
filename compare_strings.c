/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_strings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:45:52 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/22 23:56:10 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	compare_strings(char *expected, char *received)
{
	int len_expected;
	int len_received;
	int cnt;

	len_expected = str_len(expected);
	len_received = str_len(received);
	if (len_expected > len_received)
	{
		printf("\033[0;31m");
		printf("ERROR :received string is shorter than expected string 🥵\n");
		printf("\033[0m");
		printf("Expected :%s\n", expected);
		printf("Received :%s\n", received);
		return (-1);
	}
	else if (len_expected < len_received)
	{
		printf("\033[0;31m");
		printf("ERROR :received string is longer than expected string 🥵\n");
		printf("\033[0m");
		printf("Expected :%s\n", expected);
		printf("Received :%s\n", received);
		return (-1);
	}
	else
	{
		cnt = 0;
		while (expected[cnt] != '\0')
		{
			if(expected[cnt] != received[cnt])
			{
				printf("\033[0;31m");
				printf("ERROR :char at index :%d was expected :%s, received :%s 🥵\n", cnt, &expected[cnt], &received[cnt]);
				printf("\033[0m");
				return (-1);
			}
			cnt++;
		}
	}
	printf("\033[0;32m");
	printf("SUCCESS strings match 👍\n");
	printf("\033[0m");
	return (0);
}
/*
int main()
{
	compare_strings("saut", "salut");
}
*/
