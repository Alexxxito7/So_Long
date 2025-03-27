/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:41:06 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/11 16:41:09 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pointer;

	pointer = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (pointer == NULL)
		return (NULL);
	ft_strlcpy(pointer, s, ft_strlen(s) + 1);
	return (pointer);
}

/*
int	main()
{
	char	*string1 = "Alligator";
	printf("Result: %s", ft_strdup(string1));
}
*/
