/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:22:37 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:25:21 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	i = ft_strlen(s);
	while ((i >= 0) && (ptr[i] != (unsigned char)c))
		i--;
	if (ptr[i] == (unsigned char)c)
		return (&ptr[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "\0";
	char	*res1;

	res1 = ft_strrchr(s, 0);
	if (res1)
		printf("Teste 1: Encontrado '\\0' em \"%s\" → posição válida\n", s);
	else
		printf("Teste 1: '\\0' não encontrado\n");
	char *s2 = "banana";
	char *res2 = ft_strrchr(s2, 'a');
	if (res2)
		printf("Teste 2: Último 'a' em \"%s\" → \"%s\"\n", s2, res2);
	else
		printf("Teste 2: 'a' não encontrado\n");
	char *s3 = "laranja";
	char *res3 = ft_strrchr(s3, 'z');
	if (res3)
		printf("Teste 3: Encontrado 'z' em \"%s\" → \"%s\"\n", s3, res3);
	else
		printf("Teste 3: 'z' não encontrado\n");
	return (0);
}*/
