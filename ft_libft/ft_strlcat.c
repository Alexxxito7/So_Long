/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:58:27 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/05 13:59:12 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	isrc;

	isrc = 0;
	srclen = ft_strlen((char *) src);
	if ((dst == NULL && src == NULL) || size == 0)
		return (srclen);
	destlen = ft_strlen(dst);
	if (destlen >= size)
		srclen += size;
	else
		srclen += destlen;
	while (src[isrc] != '\0' && destlen < size - 1)
	{
		dst[destlen] = src[isrc];
		isrc++;
		destlen++;
	}
	dst[destlen] = '\0';
	return (srclen);
}
/*
int	main()
{
	//char    *source = "World";
	char    destination[9] = "Hello ";
//
	//printf("The solution is: %ld\n", ft_strlcat(NULL, NULL, 0));
	printf("The orig solution is: %ld\n", strlcat(destination, NULL, 0));
	//printf("The solution is: %s", destination);
	return 0;
}
*/
