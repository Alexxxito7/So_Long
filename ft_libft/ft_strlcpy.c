/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:36:55 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/05 12:09:35 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen((char *) src);
	if (!dst)
		return (srclen);
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/*
int	main()
{
	const char	*source = "Wonderwall";
	char	dest[8];
	printf("Length of source string is: %zu\n", ft_strlcpy(dest, source, 20));
	printf("Length of source string is: %zu", strlcpy(dest, source, 20));
}
*/
