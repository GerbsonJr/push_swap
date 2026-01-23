/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:07:08 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:30:05 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char   *s = "quick brown fox jumps over the lazy dog";
	int   c = 'f';
	size_t   n = 17;

	printf("ft_memchr: %p\n", ft_memchr(s, c, n));
	printf("memchr: %p\n", memchr(s, c, n));
	return (0);
}*/
