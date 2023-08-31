/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:46:18 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/31 18:41:52 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_contet	*ini_contet(int stacks)
{
	t_contet	*data = NULL;
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
	data->biggest = INT_MIN;
	data->smallest = INT_MAX;
	data->sorted = 0;
	data->idx = 0;
	return (data);
}

int sorted(t_contet *data)
{
	int i;
	
	i = 0;
	while (i < data->elementos -1)
	{
		if (data->arr[i] < data->arr[i] + 1)
			i++;
		else
			return (0);
	}
	return (1);
}

int min_dex(t_stack **stack_a)
{
	t_stack	*tmp;
	int min;

	min = INT_MAX;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->idx == -1)
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
	t_stack *nodo;
	int i;

	nodo = *stack_a;
	i = 0;
	while (nodo)
	{
		if (nodo->idx != elementos)
			i++;
		nodo = nodo->next;
	}
	if (i != elementos)
		return (0);
	return (1);
}

