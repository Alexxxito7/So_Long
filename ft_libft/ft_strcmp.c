/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:13:01 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/16 11:20:29 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (-1);
	}
	if (str1[i] == '\0' && str2[i] == '\0')
		return (1);
	else
		return (-1);
}
/*
int	main()
	{
		char    *word1 = "Hellolleagsdgd";
		char    *word2 = "Hellulle";

		printf("Result of strncmp: %i\n", ft_strncmp(word1, word2, 10));
		printf("Result of original strncmp: %i", strncmp(word1, word2, 10));
	}
*/
