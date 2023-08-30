/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:33:54 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/30 16:37:57 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_Swap.h"

void	sort_index(t_stack **stack_a, t_contet *data)
{
	t_stack *node;
	t_stack	*max;
	t_stack *min;

	node = stack_a;
	max = node_max(stack_a);
	min = node_min(stack_a);
	while (node)
	{
		if (node->index == -1)
		{
			if (node->value == min->value)
			{
				node->index = data->idx;
				data->idx++;
			}
			if (node->value == max->value)
			{
				node->idx = data->elementos;
				data->elementos--;
			}
		}
		node = node->next;
	}
}

t_stack *node_max_i(t_contet **stack)
{
	t_stack	*max;
	t_stack	*tmp;
	
	tmp = *stack;
	max = tmp;
	while (tmp)
	{
		if (tmp->index == -1)
		{
			if (tmp->value < max->value)
				max = tmp;
		}
		tmp = tmp->next;
	}
	return (max);
}

t_stack	*node_min_i(t_contet **stack)
{
	t_stack *min;
	t_stack	*tmp;

	tmp = *stack;
	min = tmp;
	while (tmp)
	{
		if (tmp->index == -1)
		{
			if (tmp->value < min->value)
				min = tmp;
		}
		tmp = tmp->next;
	}
	return (min);
}

int	idx_sorted(t_node **stack_a)
{
	t_stack *node;

	node = *stack_a;
	while (node)
	{
		if (node->idx != -1)
			node = node->next;
		else
			return (1);
	}
	return (0);
}
