/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:05:59 by gmateus-          #+#    #+#             */
/*   Updated: 2026/01/22 11:25:44 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_len(t_stacks *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

t_stacks	*find_last_node(t_stacks *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

static void	create_stack(t_stacks **stack_a, int nb)
{
	t_stacks	*last_node;
	t_stacks	*node;

	if (!stack_a)
		return ;
	node = malloc(sizeof(t_stacks));
	if (!node)
		print_error(stack_a, NULL);
	node->value = nb;
	node->next = NULL;
	if (!*stack_a)
	{
		node->previous = NULL;
		*stack_a = node;
	}
	else
	{
		last_node = find_last_node(*stack_a);
		last_node->next = node;
		node->previous = last_node;
	}
}

void	start_stacks(char **argv, t_stacks **stack_a)
{
	long	nb;
	int		nb_len;
	size_t	i;

	if (!check_input(argv))
		print_error(stack_a, argv);
	i = 0;
	while (argv[i])
	{
		nb = ft_atol(argv[i]);
		nb_len = number_len(argv[i]);
		if ((nb < INT_MIN || nb > INT_MAX) || nb_len > 10)
			print_error(stack_a, argv);
		if (!check_doubles(argv, nb))
			print_error(stack_a, argv);
		create_stack(stack_a, (int)nb);
		i++;
	}
}

void	normalize(t_stacks **stack_a)
{
	t_stacks	*actual;
	t_stacks	*compare;

	actual = *stack_a;
	compare = *stack_a;
	while (actual)
	{
		actual->index = 0;
		actual = actual->next;
	}
	actual = *stack_a;
	while (actual)
	{
		compare = *stack_a;
		while (compare)
		{
			if (actual->value > compare->value)
				actual->index += 1;
			compare = compare->next;
		}
		actual = actual->next;
	}
}
