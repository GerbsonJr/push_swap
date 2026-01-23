/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:13:53 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:40:52 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    // Teste 1: strings iguais
    const char *a1 = "abcde";
    const char *b1 = "abcde";
    printf("Teste 1: \"%s\" vs \"%s\" → %d\n", a1, b1, ft_strncmp(a1, b1, 5));

    // Teste 2: strings diferentes no meio
    const char *a2 = "abcde";
    const char *b2 = "abXde";
    printf("Teste 2: \"%s\" vs \"%s\" → %d\n", a2, b2, ft_strncmp(a2, b2, 5));

    // Teste 3: strings diferentes após n
    const char *a3 = "abcde";
    const char *b3 = "abcXY";
    printf("Teste 3: \"%s\" vs \"%s\" → %d\n", a3, b3, ft_strncmp(a3, b3, 3));

    // Teste 4: uma string menor
    const char *a4 = "abc";
    const char *b4 = "abcdef";
    printf("Teste 4: \"%s\" vs \"%s\" → %d\n", a4, b4, ft_strncmp(a4, b4, 6));

    // Teste 5: strings com terminador nulo antes de n
    const char *a5 = "abc";
    const char *b5 = "abc\0xyz";
    printf("Teste 5: \"%s\" vs \"%s\" → %d\n", a5, b5, ft_strncmp(a5, b5, 7));

    return (0);
}*/
