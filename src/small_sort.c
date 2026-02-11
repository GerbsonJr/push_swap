/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:09:11 by gmateus-          #+#    #+#             */
/*   Updated: 2026/01/22 17:26:37 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_stacks	*find_index(t_stacks *stack_a, int index)
{
	while (stack_a)
	{
		if (stack_a->index == index)
			return (stack_a);
		stack_a = stack_a->next;
	}
	return (NULL);
}

static void	sort_three(t_stacks **stack_a, int index)
{
	t_stacks	*biggest;

	biggest = find_index(*stack_a, index);
	if (!biggest)
		return ;
	if (biggest->index == (*stack_a)->index)
		ra(stack_a);
	else if (biggest->index == (*stack_a)->next->index)
		rra(stack_a);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

static void	sort_four(t_stacks **stack_a, t_stacks **stack_b, int min_value,
		int max_value)
{
	t_stacks	*smallest;
	t_stacks	*last;

	smallest = find_index(*stack_a, min_value);
	if (!smallest)
		return ;
	last = find_last_node(*stack_a);
	if ((*stack_a)->next->index == smallest->index)
		sa(stack_a);
	else if ((last->index == smallest->index)
		|| (last->previous->index == smallest->index))
		while ((*stack_a)->index != smallest->index)
			rra(stack_a);
	smallest = find_index(*stack_a, min_value);
	if ((*stack_a)->index == smallest->index)
		pb(stack_a, stack_b);
	sort_three(stack_a, max_value);
	pa(stack_a, stack_b);
}

void	sort_five(t_stacks **stack_a, t_stacks **stack_b)
{
	t_stacks	*smallest;
	t_stacks	*next;
	t_stacks	*last;

	smallest = find_index(*stack_a, 0);
	if (!smallest || !*stack_a || !(*stack_a)->next)
		return ;
	next = (*stack_a)->next;
	last = find_last_node(*stack_a);
	if (next && next->index == smallest->index)
		sa(stack_a);
	else if (next && next->next && next->next->index == smallest->index)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (last && last->previous
		&& (last->index == smallest->index || last->previous->index == smallest->index))
		while ((*stack_a)->index != smallest->index)
			rra(stack_a);
	smallest = find_index(*stack_a, 0);
	if ((*stack_a)->index == smallest->index)
		pb(stack_a, stack_b);
	sort_four(stack_a, stack_b, 1, 4);
	pa(stack_a, stack_b);
}
void	small_sort(t_stacks **stack_a, t_stacks **stack_b, int len)
{
	normalize(stack_a);
	if (len == 5)
		sort_five(stack_a, stack_b);
	else if (len == 4)
		sort_four(stack_a, stack_b, 0, 3);
	else if (len == 3)
		sort_three(stack_a, 2);
	else if (len == 2)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a);
	}
}
