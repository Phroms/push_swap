/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:42:41 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/08 16:05:51 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap(int *a1, int *a2)
{
	int	tmp;

	tmp = *a1;
	*a1 = *a2;
	*a2 = tmp;
}

void	pa(t_stack *stack)
{
	int	i;

	i = stack->len_a;
	stack->len_a = stack->len_a + 1;
	stack->len_b = stack->len_b - 1;
	while (i > 0)
	{
		swap(&stack->sa[i], &stack->sa[i - 1]);
		i--;
	}
	stack->sa[0] = stack->sb[0];
	i = 0;
	while (i <= stack->len_b)
	{
		stack->sb[i] = stack->sb[i + 1];
		i++;
	}
	write (1, "pa\n", 3);
}
