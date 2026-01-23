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
	
}