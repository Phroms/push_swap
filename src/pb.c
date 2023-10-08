/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:52:35 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/08 14:08:27 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pb(t_stack *stack)
{
	int i;

	i = stack->len_b;
	stack->len_b = stack->len_b + 1;
	stack->len_a = stack->len_a - 1;
	while (i > 0)
	{
		swap(&stack->sb[i], &stack->sb[i - 1]);
		i--;
	}
	stack->sb[0] = stack->sa[0];
	i = 0;
	while (i <= stack->len_a - 1)
	{
		stack->sa[i] = stack->sa[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}
