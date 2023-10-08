/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_chunks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:52:56 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/08 16:10:21 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	split_chunks(t_stack *stack, int num)
{
	int	cut_num;
	int	i;
	int	aux;

	i = 0;
	cut_num = stack->len / num + (stack->len % num);
	aux = cut_num;
	while (num-- > 0)
	{
		while (i < cut_num && stack->len_a > 0)
		{
			if (stack->sa[0] <= cut_num)
			{
				pb(stack);
				if (stack->sb[0] <= cut_num - (aux / 2) && stack->len_b > 1)
					rr(stack, 'b');
				i++;
			}
			else
				rr(stack, 'a');
		}
		cut_num += aux;
	}
}

static int	aux_rr(t_stack *stack, int aux_exit, int i)
{
	while (i > 0 && aux_exit == 0)
	{
		if (stack->sb[0] == stack->len_b - 1 && stack->memsolv == 0)
		{
			pa(stack);
			i--;
			stack->memsolv = 1;
			if (stack->sb[0] == stack->len_b + 1)
				aux_exit = 1;
		}
		if (aux_exit == 0)
			rr(stack, 'b');
		i--;
	}
	return (aux_exit);
}

static int	aux_rrr(t_stack *stack, int aux_exit, int i)
{
	i = stack->len_b - i;
	while (i > 0 && aux_exit == 0)
	{
		if (stack->sb[0] == stack->len_b - 1 && stack->memsolv == 0)
		{
			pa(stack);
			i--;
			stack->memsolv = 1;
			rrr(stack, 'b');
			if (stack->sb[0] == stack->len_b + 1)
				aux_exit = 1;
		}
		if (aux_exit == 0)
			rrr(stack, 'b');
		i--;
	}
	return (aux_exit);
}

void	solve(t_stack *stack)
{
	int	i;
	int	aux;
	int	aux_exit;

	aux = stack->len;
	aux_exit = 0;
	stack->memsolv = 0;
	while (stack->len_b > 0)
	{
		i = 0;
		while (stack->sb[i] != stack->len_b && i < stack->len_b)
			i++;
		if (i <= (stack->len_b / 2))
			aux_exit = aux_rr(stack, aux_exit, i);
		else if (i > (stack->len_b / 2))
			aux_rrr(stack, aux_exit, i);
		pa(stack);
		if (stack->memsolv == 1)
		{
			if (stack->sa[0] - 1 == stack->sa[1])
				sa(stack->sa);
			stack->memsolv = 0;
			aux_exit = 0;
		}
	}
}
