/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:01:40 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/09 13:02:31 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ibig;
	size_t	ilit;

	ibig = 0;
	ilit = 0;
	if (*little == '\0')
		return ((char *) big);
	while (big[ibig] != '\0' && ibig < len)
	{
		ilit = 0;
		while (big[ibig + ilit] == little[ilit] && ibig + ilit < len)
		{
			ilit++;
			if (little[ilit] == '\0')
				return ((char *) &big[ibig]);
		}
		ibig++;
		if (little[ilit] == '\0')
			return (NULL);
	}
	return (NULL);
}
/*
int	main()
{
//		char    *word1 = "ILoveRocknRolloutoftheJukebox";
//		char    *word2 = "Rolloutor";
//		char    *word3 = "ILoveRocknRolloutoftheJukebox";
//		char    *word4 = "Rolloutor";
		char	*word5 = "lorem ipsum dolor sit amet";
		char	*word6 = "dolor";
		char	*word7 = "lorem ipsum dolor sit amet";
		char	*word8 = "dolor";
		printf("Result of strnstr: %s\n", ft_strnstr(word5, word6, 15));
		printf("Result of strnstr orig: %s\n", strnstr(word7, word8, 15));
		//printf("Result of original strnstr: %s", strnstr(word1, word2, 4));
}
*/
