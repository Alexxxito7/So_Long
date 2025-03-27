/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:14:22 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/06 16:14:34 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*word;

	word = (char *) str;
	i = 0;
	while (i < n)
	{
		if (word[i] == (char) c)
			return (word + i);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	*string1 = "Welcome to the jungle";
	char	letter = 'm';
	char	*result = ft_memchr(string1, letter, 10);
	if (result == NULL)
		printf("Letter not found!");
	else
		printf("Letter found starting from: %s", result);
}
*/
