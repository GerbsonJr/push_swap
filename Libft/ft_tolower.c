/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:33:38 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 11:37:13 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c < 'A' || c > 'Z')
		return (c);
	return (c + 32);
}
/*
int	main(void)
{
	int	man;

	man = ft_tolower(78);
	printf("NUMERO : %d\n", man);
	printf("LETRA : %c\n", man);
	return (0);
}*/
