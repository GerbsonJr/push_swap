/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:35:05 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/27 13:19:57 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = (ft_strlen(s1) - 1);
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[start] && ft_strchr(set, s1[end]))
		--end;
	str = ft_substr(s1, start, ((end - start) + 1));
	return (str);
}
