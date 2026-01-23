/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:19:09 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:21:47 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = 32;
	char	b = 127;

	printf("isprint(a): %d\n", isprint(a));
	printf("ft_isprint(a): %d\n", ft_isprint(a));
	printf("isprint(b): %d\n", isprint(b));
	printf("ft_isprint(b): %d\n", ft_isprint(b));
	return (0);
}*/
