/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:55:45 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:20:54 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = 'a';
	char	b = '1';

	printf("isalpha(a): %d\n", isalpha(a));
	printf("ft_isalpha(a): %d\n", ft_isalpha(a));
	printf("isalpha(b): %d\n", isalpha(b));
	printf("ft_isalpha(b): %d\n", ft_isalpha(b));
	return (0);
}*/
