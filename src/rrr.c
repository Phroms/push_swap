/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:41:31 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/07 14:52:12 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_stack *stack)
{
	int i;

	i = stack->len_a - 1;
	while (i > 0)
	{
		swap(&stack->sa[i], &stack->sa[i - 1]);
		i--;
	}
}

void	rrb(t_stack *stack)
{
	int	i;

	i = stack->len_b - 1;
	while (i > 0)
	{
		swap(&stack->sb[i], &stack->sb[i - 1]);
		i--;
	}
}

void	rrr(t_stack *stack, char r_a_b)
{
	if (r_a_b == 'a')
	{
		rra(stack);
		write(1, "rra\n", 4);
	}
	else if (r_a_b == 'b')
	{
		rrb(stack);
		write(1, "rrb\n", 4);
	}
	else if (r_a_b == 'r')
	{
		rra(stack);
		rrb(stack);
		write(1, "rrr\n", 4);
	}
}
