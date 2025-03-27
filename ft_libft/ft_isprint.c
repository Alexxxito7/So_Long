/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:11:44 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/03 17:30:30 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isprint(int testchar)
{
	if (testchar >= 32 && testchar <= 126)
		return (testchar);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("Printable: %d", ft_isprint(argv[1][0]));
}
*/
