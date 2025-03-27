/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:51:38 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/20 12:21:41 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	numsize(int num)
{
	unsigned int	len;

	len = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
		len++;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*newstr;
	long			num;
	unsigned int	len;

	len = numsize(n);
	num = n;
	newstr = (char *)malloc((len + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	newstr[len] = '\0';
	if (num == 0)
		newstr[0] = '0';
	if (num < 0)
	{
		newstr[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		newstr[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (newstr);
}
/*
int	main(void)
{
	printf("Result: %s\n", ft_itoa(-10));
	printf("Result: %s\n", ft_itoa(-232324));
	printf("Result: %s\n", ft_itoa(0));
	printf("Result: %s\n", ft_itoa(21323));
}
*/
