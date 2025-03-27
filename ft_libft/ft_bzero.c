/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:18:50 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/04 13:47:43 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int	main()
{
	char	str[] = "Hello New World";
	printf("The first letter (orig) is: %c\n", str[2]);
	bzero(str, 5);
	printf("The test letter after n (orig) is: %c\n", str[2]);
	char	str1[] = "Hello New World";
	printf("The first letter (own) is: %c\n", str1[2]);
	ft_bzero(str1, 5);
	printf("The test letter after n (own) is: %c", str1[2]);
}
*/
