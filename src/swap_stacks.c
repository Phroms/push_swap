/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:39:50 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/21 19:49:14 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stacks(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_stack *stack_a)
{
	swap_stack(&stack_a -> data, &stack_a -> next -> data);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
{
	swap_stack(&stack_b -> data, &stack_b -> next -> data);
	write(1, "sb\n", 3);
}
