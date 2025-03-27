/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:55:46 by alschnei          #+#    #+#             */
/*   Updated: 2024/09/25 12:56:24 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*help;

	if (!*lst)
		return ;
	while (*lst)
	{
		help = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = help;
	}
	*lst = 0;
}
