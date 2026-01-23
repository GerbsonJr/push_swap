/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:07:01 by gmateus-          #+#    #+#             */
/*   Updated: 2026/01/22 11:27:02 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	check_doubles(char **av, int nbr)
{
	size_t	i;
	int		temp;
	int		count;

	if (!av || !*av)
		return (false);
	i = 0;
	count = 0;
	while (av[i])
	{
		temp = ft_atol(av[i++]);
		if (temp == nbr)
			count++;
		if (count > 1)
			return (false);
	}
	return (true);
}

void	print_error(t_stacks **stack_a, char **matriz)
{
	ft_putstr_fd("Error\n", 2);
	mem_clear(stack_a, matriz);
	exit(1);
}

static bool	check_characters(char **av)
{
	size_t	i;
	size_t	j;

	if (!av || !*av)
		return (false);
	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '+'
				|| av[i][j] == '-' || av[i][j] == ' ')
				j++;
			else
				return (false);
		}
		i++;
	}
	return (true);
}

bool	check_input(char **av)
{
	size_t	i;
	size_t	j;

	if (!av || !*av || !check_characters(av))
		return (false);
	i = 0;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '\0')
			return (false);
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == '+')
				if (ft_isdigit(av[i][j + 1]) && (j == 0
						|| !ft_isdigit(av[i][j - 1])))
					j++;
			else
				return (false);
			else
				j++;
		}
		i++;
	}
	return (true);
}

int	number_len(char *str)
{
	size_t	i;
	size_t	counter;

	if (!str)
		return (0);
	i = 0;
	counter = 0;
	while (str[i] && !(str[i] > '0' && str[i] <= '9'))
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		i++;
		counter++;
	}
	return (counter);
}
