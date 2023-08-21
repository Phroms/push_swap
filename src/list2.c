/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:48 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/21 19:24:27 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new -> next = *lst;
	*lst = new;
}

void	ft_lstclear(t_stack **lst, void (*del)(void *))
{
	t_list *nodo;
	t_list *middlemans;

	nodo = *lst;
	while (nodo != NULL)
	{
		middlemans = nodo -> next;
		ft_lstdelone(nodo, del);
		nodo = middlemans;
	}
}
