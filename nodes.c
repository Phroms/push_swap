/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:02:23 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/31 19:42:15 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lst_new(int idx, int value)
{
	t_stack *new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		return (NULL);
	new_stack->idx = idx;
	new_stack->value = value;
	new_stack->next = NULL;
	return (new_stack);
}

void	add_back(t_stack **stack, t_stack *new)
{
	t_stack *node;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	node = stack_last(*stack);
	node->next = new;
}

t_stack	*stack_last(t_stack *stack)
{
	while (stack)
	{
		if (stack->next == NULL)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

t_stack	node_max(t_stack **stack)
{
	t_stack	*max;
	t_stack	*tmp;

	tmp = *stack;
	max = tmp;
	while (tmp)
	{
		if (tmp->value > max->value)
			max = tmp;
		tmp = tmp->next;
	}
	return (*max);
}

t_stack	node_min(t_stack **stack)
{
	t_stack	*min;
	t_stack	*tmp;

	tmp = *stack;
	min = tmp;
	while (tmp)
	{
		if (tmp->value < min->value)
			min = tmp;
		tmp = tmp->next;
	}
	return (*min);
}
