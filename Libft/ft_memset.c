/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:27:03 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:35:37 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr++ = (unsigned char) c;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	str1[20] = "secret password ups";
	char	str2[20] = "secret password ups";

	//memset
	printf("%s\n", str1);
	memset(str1 + 7, '*', 8);
	printf("%s\n\n", str1);

	//ft_memset
	printf("%s\n", str2);
	ft_memset(str2 + 7, '*', 8);
	printf("%s\n", str2);
	return (0);
}*/
