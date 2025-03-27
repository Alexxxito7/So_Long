/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:25:14 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/11 15:25:48 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	itemsize;
	size_t	i;

	if (nmemb != 0 && size > ((size_t) - 1) / nmemb)
		return (NULL);
	itemsize = nmemb * size;
	pointer = malloc(itemsize);
	i = 0;
	if (pointer != NULL)
	{
		while (i < itemsize)
		{
			((char *) pointer)[i] = 0;
			i++;
		}
		return (pointer);
	}
	else
		return (NULL);
}
/*
int main() 
{
	int	*numbers;
	int	num_elements = 5;

	numbers = (int*)ft_calloc(num_elements, sizeof(int));
	printf("Array elements:\n");
	for (int i = 0; i < num_elements; i++)
		printf("%d ", numbers[i]);
	free(numbers);
	return 0;
}
*/
