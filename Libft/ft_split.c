/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:20:31 by gmateus-          #+#    #+#             */
/*   Updated: 2025/10/30 11:46:15 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_substr_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c
			&& (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static unsigned int	ft_substr_len(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	str = malloc(sizeof(char *) * (ft_substr_count(s, c) + 1));
	if (!str || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j] = ft_substr(s, i, ft_substr_len(&s[i], c));
			if (!str[j])
				return (ft_free(str, j));
			j++;
			i += ft_substr_len(&s[i], c);
		}
		else
			i++;
	}
	str[j] = 0;
	return (str);
}
/*
int main(void)
{
    char *input = "OI BOM DIA FABIO";
    char delimiter = ' ';
    char **result;
    int i = 0;

    result = ft_split(input, delimiter);
    if (!result)
    {
        printf("Erro ao dividir a string.\n");
        return (1);
    }

    // Imprime cada substring
    while (result[i])
    {
        printf("Substring %d: %s\n", i, result[i]);
        i++;
    }

    // Libera a memória alocada
    while (i >= 0)
    {
        free(result[i]);
        i--;
    }
    free(result);

    return (0);
}*/
