/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:42:18 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/31 20:02:46 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int size;

	size = size_stack(*stack_a);
	if (size == 2)
		sort2(stack_a);
	else if (size == 3)
		sort3(stack_a);
	else if (size == 4)
		sort4(stack_a, stack_b);
	else if (size == 5)
		sort5(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

void	sort2(t_stack **stack_a)
{
	t_stack *tmp;
	tmp = *stack_a;
	if (tmp->value > tmp->next->value)
		sa(stack_a);
}

void	sort3(t_stack **stack_a)
{
	t_stack *head;
	t_stack *max;

	head = *stack_a;
	max = node_max(stack_a);
	if (head->idx == max->idx)
		ra(stack_a);
	else if (head->idx == max->idx)
		rra(stack_a);
	head = *stack_a;
	if (head->value > head->next->value)
		sa(stack_a);
}

void	sort4(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *min;
	
	min = node_min(stack_a);
	put_stack_to_a(stack_a, min);
	pb(stack_b, stack_a);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

void	sort5(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *min;

	min = node_min(stack_a);
	put_stack_to_a(stack_a, min);
	pb(stack_b, stack_a);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
