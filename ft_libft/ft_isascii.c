/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:29:57 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/03 14:42:44 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("Is ASCII: %i", ft_isascii(argv[1][0]));
}
*/
/*
int	main()
{	
	int i;
 
 	i = -1;
 	while (i < 530)
 	{
 		if (!!ft_isascii(i) != !!(((i) & ~0x7f) == 0))
 		{
 			exit(printf("TEST FAILED"));
 		}
 		i++;
 	}
 	exit(printf("TEST_SUCCESS"));
}
*/
