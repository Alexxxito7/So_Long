/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:30:35 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/05 17:31:38 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_tolower(int argument)
{
	if (argument >= 65 && argument <= 90)
		return (argument + 32);
	else
		return (argument);
}
/*
int	main()
{
	char	character;
	
	character = 'A';
	
	printf("The solution is: %c", ft_tolower(character));
}
*/
