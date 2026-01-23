/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:02:48 by gmateus-          #+#    #+#             */
/*   Updated: 2026/01/22 11:25:29 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	is_sorted(t_stacks *stack_a)
{
	if (!stack_a)
		return (false);
	while (stack_a->next)
		if (stack_a->next->value > stack_a->value)
			stack_a = stack_a->next;
	else
		return (false);
	return (true);
}

long	ft_atol(char *str)
{
	long	nb;
	long	sign;
	long	i;

	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

void	mem_clear(t_stacks **stack_a, char **matriz)
{
	t_stacks	*temp;
	t_stacks	*next;
	size_t		i;

	if (stack_a && (*stack_a))
	{
		temp = *stack_a;
		while (temp)
		{
			next = temp->next;
			if (temp)
				free (temp);
			temp = next;
		}
	}
	*stack_a = NULL;
	i = 0;
	if (!matriz)
		return ;
	while (matriz[i])
		free (matriz[i++]);
	free (matriz);
}

void	free_split(char **split)
{
	size_t	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
		free (split[i++]);
	free (split);
}

void	rrr(t_stacks **stack_a, t_stacks **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 4);
}
