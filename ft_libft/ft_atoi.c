/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:38:54 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/09 13:38:58 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
		if (str[i] < 48 || str[i] > 57)
			return (0);
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10;
		number = number + str[i] - 48;
		i++;
	}
	number = number * sign;
	return (number);
}
/*
int	main()
{
	char	*numword = "   -123456";
	printf("The int for string %s is: |%d\n", numword, ft_atoi(numword));
	//printf("The int for string (orig) %s is: |%d", numword, atoi(numword));
}
*/
