/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:21:45 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/03 14:24:08 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(int alnum)
{
	if ((alnum >= 48 && alnum <= 57) || (alnum >= 65 && alnum <= 90)
		|| (alnum >= 97 && alnum <= 122))
		return (alnum);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("Is alphanumerical: %d", ft_isalnum(argv[1][0]));
}
*/
