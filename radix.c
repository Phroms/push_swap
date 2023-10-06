/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:55:22 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/06 16:59:19 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		size;
	int		bit;

	tmp = *stack_a;
	bit = 1;
	while (stack_sorted(stack_a) != 1)
	{
		size = stack_size(*stack_a);
		while (size > 0 && tmp != NULL)
		{
			if (tmp->index & bit)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
			tmp = *stack_a;
			size--;
		}
		while (stack_size(*stack_b))
			pa(stack_a, stack_b);
		tmp = *stack_a;
		bit = bit << 1;
		size--;
	}
}

int	stack_size(t_stack *stack)
{
	t_stack	*node;
	int		i;

	node = stack;
	i = 0;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}
