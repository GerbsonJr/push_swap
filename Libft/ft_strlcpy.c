/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:17:51 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:36:54 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	i = 0;
	src_len = ft_strlen(src);
	if (size <= 0)
		return (src_len);
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	const char	*vtnc = "testando o int comedia";
	char	vtnb[] = "";
	size_t	agr;

	agr = ft_strlcpy(vtnb, vtnc, 9);
	printf("%zu\n", agr);

	   char src[] = "testando o int comedia";
    char dest1[22];
    char dest2[10];
    char dest3[5];
    size_t len;

    // Teste 1: buffer grande o suficiente
    len = ft_strlcpy(dest1, src, sizeof(dest1));
    printf("Teste 1:\nsrc: %s\ndest: %s\nretorno: %zu\n\n", src, dest1, len);

    // Teste 2: buffer pequeno (truncamento)
    len = ft_strlcpy(dest2, src, sizeof(dest2));
    printf("Teste 2:\nsrc: %s\ndest: %s\nretorno: %zu\n\n", src, dest2, len);

    // Teste 3: buffer com size = 1 (só cabe o \0)
    len = ft_strlcpy(dest3, src, sizeof(dest3));
    printf("Teste 3:\nsrc: %s\ndest: %s\nretorno: %zu\n\n", src, dest3, len);
    return (0);
}
*/
