/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:22:36 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/24 14:43:25 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	s[] = "cinco";

	printf("String: %s\n", s);
	printf("strlen(s): %lu\n", strlen(s));
	printf("ft_strlen(s): %zu\n", ft_strlen(s));
	return (0);
}*/
