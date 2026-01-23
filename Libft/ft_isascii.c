/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:11:20 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:21:06 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = '1';
	char	b = 0x80;

	printf("isascii(a): %d\n", isascii(a));
	printf("ft_isascii(a): %d\n", ft_isascii(a));
	printf("isascii(b): %d\n", isascii(b));
	printf("ft_isascii(b): %d\n", ft_isascii(b));
	return (0);
}*/
