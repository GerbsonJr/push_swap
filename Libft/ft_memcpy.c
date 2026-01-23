/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:57:01 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/30 12:52:14 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	if (!dest && !src)
		return (NULL);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
/*
int	main(void)
{
	//ft_memcpy
	char	src2[50] = "batata";
	char	*dest2 = NULL;
	ft_memcpy(dest2, src2, 6);
	printf("ft_memcpy\nsrc: %s\ndest: %s\n", src2, dest2);
	return (0);
}*/
