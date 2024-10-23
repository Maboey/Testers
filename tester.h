/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:19:23 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/22 23:54:59 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TESTER_H
# define TESTER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int	compare_strings(char *expected, char *received);
char *random_str(int len, char *option);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
