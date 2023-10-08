/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:34:09 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/08 16:09:18 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_stack *stack)
{
	int	i;

	i = 0;
	while (i + 1 < stack->len_a)
	{
		swap(&stack->sa[i], &stack->sa[i + 1]);
		i++;
	}
}

void	rb(t_stack *stack)
{
	int	i;

	i = 0;
	while (i + 1 < stack->len_b)
	{
		swap(&stack->sb[i], &stack->sb[i + 1]);
		i++;
	}
}

void	rr(t_stack *stack, char r_a_b)
{
	if (r_a_b == 'a')
	{
		ra(stack);
		write(1, "ra\n", 3);
	}
	else if (r_a_b == 'b')
	{
		rb(stack);
		write(1, "rb\n", 3);
	}
	else if (r_a_b == 'r')
	{
		ra(stack);
		rb(stack);
		write(1, "rr\n", 3);
	}
}
