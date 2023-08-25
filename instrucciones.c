/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instrucciones.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:37:01 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/25 21:43:25 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
