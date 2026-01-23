/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:16:20 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/24 15:25:21 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	little_len;

	if (!little)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	i = 0;
	little_len = ft_strlen(little);
	while (big[i] && little_len <= len - i)
	{
		if (!ft_strncmp(big + i, little, little_len))
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "to find a needle in a haystack";
	char	substr[] = "needle";
	int	n = 18;

	printf("ft_strnstr: %p\n", ft_strnstr(str, substr, n);
}*/
