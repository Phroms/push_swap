/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:16:24 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/28 21:02:23 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*next_min(t_stack **stack_a)
{
	t_stack	*head;
	t_stack	*min;
	int		min_f;

	head = *stack_a;
	min = NULL;
	min_f = 0;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!min_f || head->value < min->value))
			{
				min = head;
				min_f = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_init(t_stack **stack_a)
{
	t_stack	*node;
	int		index;

	node = next_min(stack_a);
	index = 0;
	while (node)
	{
		node->index = index++;
		node = next_min(stack_a);
	}
}
