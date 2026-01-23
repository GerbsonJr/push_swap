/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:34:10 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/31 17:03:52 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		size;
	t_list	*last;

	if (!lst)
		return (NULL);
	size = ft_lstsize(lst) - 1;
	while (size--)
		lst = lst->next;
	last = lst;
	return (last);
}
