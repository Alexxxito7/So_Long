/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:17:58 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/19 10:18:03 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;

	joint = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (joint == NULL)
		return (NULL);
	ft_memcpy(joint, s1, ft_strlen(s1));
	ft_strlcat(joint, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (joint);
}
/*
int	main(void)
{
	char	*string = "Wonderful";
	char	*string1 = " Summer";

	printf("Result: %s", ft_strjoin("Wonderful ", "Summer"));
	printf("Result: %s", strjoin(string, string1));
	return (0);
}
*/
