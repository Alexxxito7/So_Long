/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:58:09 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/03 13:35:40 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int num)
{
	if (num >= 48 && num <= 57)
		return (num);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("Num or not: %i\n", ft_isdigit(argv[1][0]));
		printf("Num or not: %i", isdigit(argv[1][0]));
}
*/
