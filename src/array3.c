/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:59:37 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/07 14:41:44 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	array3(int *a, t_stack *stack)
{
	if (stack->len == 2)
	{
		if (a[0] > a[1])
			sa(stack->sa);
	}
	else if (a[0] < a[1] && a[0] < a[2] && a[1] > a[2])
	{
		rrr(stack, 'a');
		sa(stack->sa);
	}
	else if (a[0] > a[1] && a[0] < a[2] && a[1] < a[2])
		sa(stack->sa);
	else if (a[0] < a[1] && a[0] > a[2] && a[1] > a[2])
		rrr(stack, 'a');
	else if (a[1] < a[2] && a[0] > a[1] && a[0] > a[2])
		rr(stack, 'a');
	else if (a[1] > a[2] && a[0] > a[1] && a[0] > a[2])
	{
		rr(stack, 'a');
		sa(stack->sa);
	}
}
