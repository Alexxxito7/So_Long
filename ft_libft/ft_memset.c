/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:55:42 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/04 12:41:51 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*sptr;

	sptr = str;
	i = 0;
	while (i < n)
	{
		sptr[i] = c;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	tstr[11] = "Wonderwall";
	//memset(tstr, 'b',15);
	//ft_memset(tstr, 'b', 10);
	printf("New string: %s", tstr);
}
*/
