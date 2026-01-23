/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:08:22 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:20:38 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = 'A';
	char	b = '1';
	char	c = '?';

	printf("isalnum(a): %d\n", isalnum(a));
	printf("ft_isalnum(a): %d\n", ft_isalnum(a));
	printf("isalnum(b): %d\n", isalnum(b));
	printf("ft_isalnum(b): %d\n", ft_isalnum(b));
	printf("isalnum(c): %d\n", isalnum(c));
	printf("ft_isalnum(c): %d\n", ft_isalnum(c));
	return (0);
}*/
