/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:38:56 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:23:03 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (char *)s;
	while (ptr[i] && (ptr[i] != (unsigned char)c))
		i++;
	if (ptr[i] == (unsigned char)c)
		return (&ptr[i]);
	return (NULL);
}
/*
int	main(void)
{
	const char *s = "cansado";
	char	*resultado;

	resultado = ft_strchr(s, 110);
	if (resultado)
		printf("Caractere encontrado: %c\n", *resultado);
	else
		printf("Caractere não encontrado.\n");
	return (0);
}*/
