/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:17:26 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/06 17:02:12 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_stack **stack)
{
	t_stack	*top;
	t_stack	*next;
	int		tmp_val;
	int		tmp_ind;

	if (stack_size(*stack) < 2)
		return (1);
	top = *stack;
	next = top->next;
	tmp_val = top->value;
	tmp_ind = top->index;
	top->index = next->index;
	top->value = next->value;
	next->value = tmp_val;
	next->index = tmp_ind;
	return (0);
}

int	sa(t_stack **stack_a)
{
	if (swap(stack_a) == 1)
		return (1);
	write(1, "sa\n", 3);
	return (0);
}

int	sb(t_stack **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	write(1, "sb\n", 3);
	return (0);
}

int	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) < 2 || stack_size(*stack_b) < 2)
		return (-1);
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
	return (0);
}
