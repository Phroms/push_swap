/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:14:05 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/05 20:28:19 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size == 2)
		sort_2(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

void	sort_2(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	if (tmp->value > tmp->next->value)
		sa(stack_a);
}

void	sort_3(t_stack **stack_a)
{
	t_stack	*head;
	t_stack	*max;

	head = *stack_a;
	max = node_max(stack_a);
	if (head->index == max->index)
		ra(stack_a);
	else if (head->next->index == max->index)
		rra(stack_a);
	head = *stack_a;
	if (head->value > head->next->value)
		sa(stack_a);
}

void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *min;

	min = node_min(stack_a);
	put_node_top_a(stack_a, min);
	pb(stack_b, stack_a);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *min;

	min = node_min(stack_a);
	if (min->next == NULL)
		rra(stack_a);
	else
		put_node_top_a(stack_a, min);
	pb(stack_b, stack_a);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
