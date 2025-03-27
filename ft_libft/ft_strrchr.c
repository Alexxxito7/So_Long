/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:23:42 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/06 14:23:45 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*laststop;

	laststop = NULL;
	while (*str != '\0')
	{
		if (*str == (char) c)
			laststop = (char *) str;
		str++;
	}
	if (*str == (char) c)
		laststop = (char *) str;
	if (laststop)
		return (laststop);
	else
		return (NULL);
}
/*
int	main()
{
	const char	*word = "Exorbitant";
	char	letter = 'i';
	
	printf("String after letter is: %s\n", ft_strrchr(word, letter));
	printf("String after (origfun) letter is: %s", strrchr(word, letter));
}
*/
