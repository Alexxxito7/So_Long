/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:47:16 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/05 17:47:25 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int search_str)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (*str != '\0')
	{
		if (*str == (unsigned char) search_str)
			return ((char *) str);
		str++;
	}
	if ((unsigned char) search_str == '\0')
		return ((char *) str);
	return (NULL);
}
/*
int	main()
{
	const char	*word = "Wonderwall";
	char	search;
	
	search = 'i';
	printf("Pointer of searched spot: %s\n", ft_strchr(word, search));
	printf("Pointer of (origfun) searched spot: %s\n", strchr(word, search));
}
*/
