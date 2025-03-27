/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:38:57 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/03 12:57:36 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int check)
{
	if ((check >= 65 && check <= 90) || (check >= 97 && check <= 122))
		return (check);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("1 is alpha, 0 is non-alpha: %d\n", ft_isalpha(argv[1][0]));
		printf("original - 1 is alpha, 0 is non-alpha: %d", isalpha(argv[1][0]));
	}

}
*/
