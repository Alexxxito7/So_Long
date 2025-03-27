/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:23:46 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/04 16:37:58 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destination;
	unsigned char		*source;

	destination = (unsigned char *) dest;
	source = (unsigned char *) src;
	if (source == NULL && destination == NULL)
		return (NULL);
	if (destination > source)
	{
		destination += n;
		source += n;
		while (n--)
		{
			*(--destination) = *(--source);
		}
	}
	else
	{
		while (n--)
		{
			*(destination++) = *(source++);
		}
	}
	return (dest);
}
/*
int	main()
{
	char	source[] = "1234567890";
	char	source2[] = "1234567890";
	//char	*destination = "orem ipsum dolor sit a";
	
	printf("Source string: %s\n", source);
	//printf("Destination string: %s\n", destination);
	printf("Result: %s\n", (char *) ft_memmove(source + 2, source, 8));
	printf("Result orig: %s", (char *) memmove(source2 + 2, source2, 8));
}
*/
