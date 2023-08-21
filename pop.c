/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:03:06 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/21 21:20:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new;

	if (!stack_a ||stack_b)
		ft_error();
	tmp = *stack_b;
	*stack_b = new -> next;
	ft_lstadd_front(*stack_a, new);
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*new;

	if (!stack_a || stack_b)
		ft_error();
	new = *stack_a;
	*stack_a = new -> next;
	ft_lstadd_front(*stack_b, new);
	write(1, "pb\n", 3);
}

void	ra(t_stack **stack_a)
{
	t_stack	*count;

	while (*stack_a -> next != NULL)
	{
		
	}
}
