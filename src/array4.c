/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:08:23 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/08 13:53:11 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	array4(int *a, t_stack *stack)
{
	if (a[0] < a[1] && a[0] < a[2] && a[0] < a[3] && stack->len_a == 4)
		pb(stack);
	else if (a[0] > a[1] && a[1] < a[2] && a[1] < a[3] && stack->len_a == 4)
	{
		sa(stack->sa);
		pb(stack);
	}
	else if (a[0] > a[2] && a[1] > a[2] && a[2] < a[3] && stack->len_a == 4)
	{
		rr(stack, 'a');
		sa(stack->sa);
		pb(stack);
	}
	else if (a[0] > a[3] && a[1] > a[3] && a[2] > a[3] && stack->len_a == 4)
	{
		rrr(stack, 'a');
		pb(stack);
	}
	if (stack->len_a == 3)
		array3(a, stack);
	pa(stack);
}
