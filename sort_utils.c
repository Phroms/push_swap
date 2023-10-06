/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:41:00 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/06 17:01:02 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	put_node_top_a(t_stack **stack_a, t_stack *stack)
{
	while (*stack_a != stack)
	{
		ra(stack_a);
	}
	return (0);
}

int	put_node_top_b(t_stack **stack_b, t_stack *stack)
{
	while (*stack_b != stack)
	{
		rb (stack_b);
	}
	return (0);
}

int	stack_sorted(t_stack **stack)
{
	t_stack	*node;

	node = *stack;
	while (node && node->next)
	{
		if (node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}

t_stack	*stack_end(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next != NULL)
			return (tmp);
	}
	return (tmp);
}
