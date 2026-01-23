/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:24:43 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:22:24 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (!dest || !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_dest < ptr_src)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n--)
			ptr_dest[n] = ptr_src[n];
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src1 = NULL;

	printf("Antes : %s\n", src1);
	ft_memmove(src1 + 2, src1, 4);
	printf("Resulado : %s\n", src1);
	return (0);
}*/
