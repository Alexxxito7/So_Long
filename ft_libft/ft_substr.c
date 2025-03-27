/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:02:06 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/16 20:02:34 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t l1, size_t l2)
{
	if (l1 < l2)
		return (l1);
	return (l2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	lenstr;
	size_t	startind;

	startind = min(start, ft_strlen(s));
	lenstr = min(ft_strlen(s) - startind, len) + 1;
	substring = ft_calloc(lenstr, sizeof (char));
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, &s[startind], lenstr);
	return (substring);
}
/*
int	main()
{
	char	*string = "Doktorskaya Kolbasa";
	printf("Result: %s", ft_substr(string, 4, 8));
}
*/
