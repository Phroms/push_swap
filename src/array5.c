/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:15:47 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/08 13:57:59 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int f_aux(int *a, t_stack *stack, int aux)
{
	if (a[0] > a[2] && a[1] > a[2] && a[2] < a[3] && a[2] < a[4] && aux == 0)
	{
		rr(stack, 'a');
		sa(stack->sa);
		pb(stack);
		aux++;
	}
	else if ((a[0] > a[1] || a[0] < a[1]) && a[1] > a[3] \
			&& a[2] > a[3] && a[3] < a[4] && aux == 0)
	{
		rrr(stack, 'a');
		rrr(stack, 'a');
		pb(stack);
		aux++;
	}
	else if (a[0] > a[4] && a[1] > a[4] && a[2] > a[4] \
			&& a[3] > a[4] && aux == 0)
	{
		rrr(stack, 'a');
		pb(stack);
		aux++;
	}
	return (aux);
}

void	array5(int *a, t_stack *stack)
{
	int aux;

	aux = 0;
	if (a[0] < a[1] && a[0] < a[2] && a[0] < a[3] && a[0] < a[4] && aux == 0)
	{
		pb(stack);
		aux++;
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[1] < a[3] \
			&& a[1] < a[4] && aux == 0)
	{
		sa(stack->sa);
		pb(stack);
		aux++;
	}
	aux = f_aux(stack->sa, stack, aux);
	array4(stack->sa, stack);
	if (aux == 1)
	{
		pa(stack);
		if (a[0] > a[1])
			sa(stack->sa);
	}
}
