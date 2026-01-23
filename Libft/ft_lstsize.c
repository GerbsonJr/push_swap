/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:40:19 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/30 11:03:35 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	node_count;

	if (!lst)
		return (0);
	node_count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		node_count++;
	}
	return (node_count);
}
