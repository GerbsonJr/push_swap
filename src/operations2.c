/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:06:48 by gmateus-          #+#    #+#             */
/*   Updated: 2026/01/22 11:26:30 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stacks **stack_a)
{
	t_stacks	*temp;
	t_stacks	*last;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	temp = (*stack_a);
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->previous = NULL;
	last = find_last_node(*stack_a);
	if (last)
		last->next = temp;
	temp->next = NULL;
	temp->previous = last;
	write (1, "ra\n", 3);
}

void	rb(t_stacks **stack_b)
{
	t_stacks	*temp;
	t_stacks	*last;

	if (!stack_b || !*stack_b || !(*stack_b)-> next)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->previous = NULL;
	last = find_last_node(*stack_b);
	if (last)
		last->next = temp;
	temp->previous = last;
	temp->next = NULL;
	write (1, "rb\n", 3);
}

void	rr(t_stacks **stack_a, t_stacks **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write (1, "rr\n", 3);
}

void	rra(t_stacks **stack_a)
{
	t_stacks	*last;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	last = find_last_node(*stack_a);
	if (!last || !last->previous)
		return ;
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = (*stack_a);
	(*stack_a)->previous = last;
	*stack_a = last;
	write (1, "rra\n", 4);
}

void	rrb(t_stacks **stack_b)
{
	t_stacks	*last;

	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	last = find_last_node(*stack_b);
	if (!last || !last->previous)
		return ;
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = *stack_b;
	(*stack_b)->previous = last;
	*stack_b = last;
	write (1, "rrb\n", 4);
}
