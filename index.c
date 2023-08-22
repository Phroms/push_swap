/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:37:02 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/22 21:28:35 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_contet	*ini_contet(int stacks)
{
	t_contet *data = NULL;
	int i;

	data = malloc(sizeof(t_contet));
	if (!data)
		return (NULL);
	data->arr = malloc(stacks * sizeof(long long));
	if (data->arr == NULL)
	{
		free(data);
		return (data);
	}
	i = -1;
	while (++i < stacks)
		data->arr[i] = 0;
	data->elementos = stacks;
	data->big = INT_MIN;
	data->small = INT_MAX;
	data->sortex = 0;
	data->index = 0;
	return (data);
}

int sorted(t_contet *data)
{
	int i;

	i = 0;
	while (i < data->elemtos - 1)
	{
		if (data->arr[i] < data->arr[i] + 1)
			i++;
		else
			return (0);
	}
	return (1);
}

int	min_dex(t_stack **stack_a)
{
	t_stack	*tmp;
	int min;

	min = INT_MAX;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->index == -1)
		{
			if (tmp->value < min)
				min = tmp->value;
		}
		tmp = tmp->next;
	}
	return (min);
}

int in_sorted(t_stack **stack_a, int elementos)
{
	t_stack	*nodo;
	int 	i;

	nodo = stack_a;
	i = 0;
	while (nodo)
	{
		if (nodo->index != elementos)
			i++;
		nodo = nodo->next;
	}
	if (i != elementos)
		return (0);
	return (1);
}
