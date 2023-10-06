/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:59:31 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/06 17:00:13 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (stack_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = stack_end(stack);
	*stack = head->next;
	tail->next = head;
	head->next = NULL;
	return (0);
}

int	reverse_rot(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (stack_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = stack_end(stack);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	ra(t_stack **stack_a)
{
	if (rotate(stack_a) == -1)
	{
		return (-1);
	}
	write(1, "ra\n", 3);
	return (0);
}

int	rra(t_stack **stack_a)
{
	if (rotate(stack_a) == -1)
		return (1);
	write(1, "rra\n", 4);
	return (0);
}

int	rb(t_stack **stack_b)
{
	if (rotate(stack_b) == -1)
	{
		return (-1);
	}
	write(1, "rb\n", 3);
	return (0);
}
