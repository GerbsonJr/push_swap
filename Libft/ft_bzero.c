/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:02:45 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/23 17:33:20 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return ;
	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}
/*
int	main(void)
{
        char    str1[16] = "testetesteteste";
        char    str2[16] = "testetesteteste";

        //bzero
        printf("%s\n", str1);
        bzero(str1 + 5, 10);
        printf("%s\n\n", str1);

        //ft_bzero
        printf("%s\n", str2);
        ft_bzero(str2 + 5, 10);
        printf("%s\n", str2);
	return (0);
}*/
