/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:21:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/31 19:52:39 by agrimald         ###   ########.fr       */
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
		size = size_stack(*stack_a);
		while (size > 0 && tmp != NULL)
		{
			if (tmp->idx & bit)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
			tmp = *stack_a;
			size--;
		}
		while (size_stack(*stack_b))
			pa(stack_a, stack_b);
		tmp = *stack_a;
		bit = bit << 1;
		size--;
	}
}
