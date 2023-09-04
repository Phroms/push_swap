/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:47:43 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/04 17:46:16 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_init(t_stack **stack_a, t_contet *data)
{
	int i;
	int nbr;

	i = 0;
	while (i < data->elementos)
	{
		nbr = (int)data->arr[i];
		if (!(add_back(stack_a, stack_new(nbr, -1))))
		{
			free_a(stack_a);
			return ;
		}
		i++;
	}
	while (idx_sorted(stack_a))
		sort_index(stack_a, data);
}

int	size_stack(t_stack *stack)
{
	int i;

	i = 0;
	while (stack->next)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
