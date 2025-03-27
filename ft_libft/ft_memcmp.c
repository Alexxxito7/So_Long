/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:29:40 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/16 16:29:43 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			i;

	string1 = (unsigned char *) s1;
	string2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (string1[i] == string2[i])
			i++;
		else if (string1[i] > string2[i])
			return (1);
		else if (string1[i] < string2[i])
			return (-1);
	}
	return (0);
}
/*
int	main()
{
	char	*string1 = "Welcome to the Jungle";
	char	*string2 = "Welcome tu the Jungle";	
	char	*string3 = "Welcome to the Jungle";
	char	*string4 = "Welcome tu the Jungle";	
	printf("Result: %d\n", ft_memcmp(string1, string2, 5));
	printf("Result orig: %d", memcmp(string3, string4, 5));
}
*/
