/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_stacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:34:30 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/25 21:34:45 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	put_stack_top_a(t_stack **stack_a, t_stack *node)
{
	while (*stack_a != node)
	{
		ra(stack_a);
	}
	return (0);
}

int	put_stack_top_b(t_stack **stack_b, t_stack *node)
{
	while (*stack_b != node)
	{
		rb(stack_b);
	}
	return (0);
}

int stack_sorted(t_stack **stack)
{
	t_node *node;

	node = *stack;
	while (node && node->next)
	{
		if (node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}

t_node *stack_end(t_stack **stack)
{
	t_node *tmp;

	tmp = *stack;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}
