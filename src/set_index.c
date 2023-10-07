/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:48:20 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/07 14:54:02 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	set_index(t_stack *stack)
{
	int i;
	int j;
	int new_index;
	
	i = -1;
	while (i++ < stack->len)
		stack->saux[i] = stack->sa[i];
	i = 0;
	while (i < stack->len)
	{
		new_index = 1;
		j = 0;
		while (j < stack->len)
		{
			if (i != j && stack->saux[i] > stack->saux[j])
				new_index++;
			j++;
		}
		stack->sa[i] = new_index;
		i++;
	}
}
