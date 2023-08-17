/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:40:57 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/17 20:33:41 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Librerias que utilizare */
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

/* Estructura que utilizare */

typedef struct	s_stack
{
	int 			data;
	struct s_stack	*next;
}					t_stack;

/* Comienzo de push_swap */

int main(int argc, char **argv);

/* Listas del libft */

t_stack	*ft_lstnew(int n);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_stack *lst, void (*del)(void*));
void	ft_lstclear(t_stack **lst, void (*del)(void*));
/* Funciones credas */

void	swap_stacks(int *a, int *b);
void	ft_error(void);

/* Funciones del utils que utilizare */

int	ft_strlen(char *str);
long long ft_atol(const char *str);
int checker_space(int c);

#endif
