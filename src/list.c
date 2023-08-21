/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:06:36 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/21 21:01:29 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int n)
{
	t_stack	*new_list;

	new_list = malloc(sizeof(t_stack));
	if (!new_list)
		return (NULL);
	new_list -> content = content;
	new_list -> next = NULL;
	return (new_list);
}

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> NULL;
		i++;
	}
	return (i);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst => next;
	}
	return (lst);
}

t_stack	*ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*nodo;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	nodo = ft_lstlast(*lst);
	nodo -> next = new;
}

void	ft_lstdelone(t_stack *lst, void (*del)(void*))
{
	del(lst -> content);
	free(lst);
}
