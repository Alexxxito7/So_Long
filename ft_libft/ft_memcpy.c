/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:28:24 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/04 16:08:08 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src;

	dest = dest_str;
	src = src_str;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest_str);
}
/*
int	main()
{
	char	source[] = "Sensu";
	char	destination[] = "Musicality";
	printf("Source File: %s\n", source);
	printf("Destination File: %s\n", destination);
	ft_memcpy(destination, source, 5);
	printf("Destination File after memcpy: %s", destination);
}
*/
