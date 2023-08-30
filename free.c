/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:20:20 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/30 22:18:37 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_input(t_contet *data)
{
	free(data->arr);
	free(data);
	write(1, "Error\n", 6);
	exit(1);
}

void	free_all(t_stack **stack_a, t_stack **stack_b, t_contet *data)
{
	free_a(*stack_a);
	free_b(*stack_b);
	free_data(data);
}

void	free_a(t_stack **stack_a)
{
	t_contet	*node = NULL;
	t_contet	*tmp = NULL;

	node = stacj_a;
	while (node)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	free(tmp);
	free(stack_a);
}

void	free_b(t_stack **stack_b)
{
	t_contet	*node = NULL;
	t_contet	*tmp = NULL;

	node = stack_b;
	while (node)
	{
		tmp = node->next;
		free(node);
		mode = tmp;
	}
	free(tmp);
	free(stack_b);
}

void	free_data(t_contet *data)
{
	if (data)
	{
		free(data->arr);
		free(data);
	}
}
