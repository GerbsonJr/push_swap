/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:04:02 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:21:24 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = '1';
	char	b = 'a';

	printf("isdigit(a): %d\n", isdigit(a));
	printf("ft_isdigit(a): %d\n", ft_isdigit(a));
	printf("isdigit(b): %d\n", isdigit(b));
	printf("ft_isdigit(b): %d\n", ft_isdigit(b));
	return (0);
}*/
