/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:41:56 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/19 11:42:10 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	char	*trimmed;
	size_t	s1_strlen;

	s1_strlen = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (s1_strlen > start && ft_strchr(set, s1[s1_strlen - 1]) != NULL)
		s1_strlen--;
	trimmed = ft_substr(s1, start, s1_strlen - start);
	return (trimmed);
}
/*
int main()
{
	printf("Result: %s\n", ft_strtrim("     Hello World!   "," "));
	printf("Strlen: %ld", strlen(ft_strtrim("     Hello World!   "," ")));
	return 0;
}
*/
