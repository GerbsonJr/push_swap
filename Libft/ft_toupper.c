/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:22:42 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/28 10:46:07 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 'a' || c > 'z')
		return (c);
	return (c - 32);
}
/*
int	main(void)
{
	int	man;
	man = ft_toupper(110);
	printf("Código ASCII: %d\n", man);
	printf("Letra maiúscula: %c\n", man);
	return (0);
}*/
