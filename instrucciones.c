/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instrucciones.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:37:01 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/28 15:35:11 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_stack **stack)
{
	t_stack	*top;
	t_stack	*next;
	int		tmp_val; // es una variable temporal de value;
	int		tmp_idx; // es una variable temportal de index;

	if (size_stack(*stack) < 2)
		return (1);
	top = *stack;
	next = top->value;
	tmp_val = top->value;
	tmp_idx = top->idx;
	top->idx = next->idx;
	top->value = next->value;
	next->value = tmp_val;
	next->idx = tmp_idx;
	return (0);
}

int ra(t_stack **stack_a)
{
	if (rotate(stack_a) == 1)
	{
		ft_putstr("error not managed\n");
		return (-1);
	}
	ft_putstr("ra\n");
	return (0);
}

int rra(t_stack **stack_a)
{
	if (reverse_rot(stack_a) == -1)
		return (1);
	ft_putstr("rra\n");
	return (0);
}

int rb(t_stack **stack_b)
{
	if (rotate(stack_b) == -1)
	{
		ft_putstr("error not managed\n");
		return (-1);
	}
	ft_putstr("rb\n");
	return (0);
}

int rrb(t_stack **stack_b)
{
	if (reverse_rot(stack_b) == -1)
		return (1);
	ft_putstr("rrb\n");
	return (0);
}
