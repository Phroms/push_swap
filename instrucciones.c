/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instrucciones.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:37:01 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/31 19:32:46 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	/* Swap */

int	swap(t_stack **stack)
{
	t_stack	*top;
	t_stack	*next;
	int		tmp_val; // es una variable temporal de value;
	int		tmp_idx; // es una variable temportal de index;

	if (size_stack(*stack) < 2)
		return (1);
	top = *stack;
	next = top->next;
	tmp_val = top->value;
	tmp_idx = top->idx;
	top->idx = next->idx;
	top->value = next->value;
	next->value = tmp_val;
	next->idx = tmp_idx;
	return (0);
}

int	sa(t_stack **stack_a)
{
	if (swap(stack_a) == 1)
		return (1);
	write(1, "sa\n", 3);
	return (0);
}

int sb(t_stack **stack_b)
{
	if (swap(stack_b) == 1)
		return (1);
	write(1, "sb\n", 3);
	return (0);
}

int ss(t_stack **stack_a, t_stack **stack_b)
{
	if (size_stack(*stack_a) < 2 || (size_stack(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
	return (0);
}

	/* Push */

int	push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack *tmp;
	t_stack	*head_to;
	t_stack *head_from;

	if (size_stack(*stack_from))
	{
		write(1, "push no funciona\n", 17);
		return (-1);
	}
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_from;
		*stack_to = tmp;
	}
	return (0);
}

int pa(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_a, stack_b) == 1)
		return (1);
	write(1, "pa\n", 3);
	return (0);
}

int pb(t_stack **stack_b, t_stack **stack_a)
{
	if (push(stack_b, stack_a) == 1)
		return (1);
	write(1, "pb\n", 3);
	return (0);
}

	/* Rotate */ 

int rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (size_stack(*stack) < 2)
		return (-1);
	head = *stack;
	tail = stack_end(stack);
	*stack = head->next;
	tail->next = head;
	head->next = NULL;
	return (0);
}

int reverse_rot(t_stack **stack)
{
	t_stack *head;
	t_stack	*tail;

	if (size_stack(*stack) < 2)
		return (-1);
	head = *stack;
	tail = stack_end(stack);
	while (head)
	{
		if (head->next->next)
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

int ra(t_stack **stack_a)
{
	if (rotate(stack_a) == 1)
	{
		write(1, "error not managed\n", 18);
		return (-1);
	}
	write(1, "ra\n", 3);
	return (0);
}

int rra(t_stack **stack_a)
{
	if (reverse_rot(stack_a) == -1)
		return (1);
	write(1,"rra\n", 4);
	return (0);
}

int rb(t_stack **stack_b)
{
	if (rotate(stack_b) == -1)
	{
		write(1, "error not managed\n", 18);
		return (-1);
	}
	write(1, "rb\n", 3);
	return (0);
}

int rrb(t_stack **stack_b)
{
	if (reverse_rot(stack_b) == -1)
		return (1);
	write(1, "rrb\n", 4);
	return (0);
}
