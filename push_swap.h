/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:55:01 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/06 16:54:13 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

	/* Estructuras creadas */

typedef struct	s_stack
{
	int value; // es el valor del nodo;
	int index; // es index y es el indice del nodo;
	struct	s_stack *next;
}t_stack;

typedef struct	s_contet
{
	long long **arr;
	int elementos;
	int	biggest;
	int	smallest;
	int sorted;
	int idx;
}t_contet;

	/* Comienzo del push_swap */

int main(int argc, char **argv);

	/* Free */

void	free_stack(t_stack **stack);
		
	/* Input */

int		check_num(char *argv);
int		check_rep(long tmp, char **argv, int i, t_contet *data);
void	input_parse(t_contet *data, char **argv);
long	ft_atoi(const char *str);
void	ft_error(void);

	/* Index */

t_stack	*next_min(t_stack **stack_a);
void	index_init(t_stack **stack_a);

	/* Main */

void	data_init(t_contet *data, int argc);
void	stack_init(t_stack **stack_a, char **argv);
int		check_sorted(t_stack **stack_a);
void	check_argv(int argc, char *s);
int		main(int argc, char **argv);

	/* Nodes */

t_stack	*new_node(int value);
void	ft_lstadd_back(t_stack **stack, t_stack *new);
t_stack	*ft_lstlast(t_stack *head);
t_stack	*node_max(t_stack **stack);
t_stack	*node_min(t_stack **stack);

	/* Push */

int	push(t_stack **stack_to, t_stack **stack_from);
int	pa(t_stack **stack_a, t_stack **stack_b);
int	pb(t_stack **stack_a, t_stack **stack_b);

	/* Radix */

void	radix_sort(t_stack **stack_a, t_stack **stack_b);
int		stack_size(t_stack *stack);

	/* Rotate */

int		rotate(t_stack **stack);
int		reverse_rot(t_stack **stack);
int		ra(t_stack **stack_a);
int		rra(t_stack **stack_a);
int		rb(t_stack **stack_a);

	/* Sort */

void	sort(t_stack **stack_a, t_stack **stack_b);
void	sort_2(t_stack **stack_a);
void	sort_3(t_stack **stack_a);
void	sort_4(t_stack **stack_a, t_stack **stack_b);
void	sort_5(t_stack **stack_a, t_stack **stack_b);

	/* Sort Utils */

int		put_node_top_a(t_stack **stack_a, t_stack *stack);
int		put_node_top_b(t_stack **stack_b, t_stack *stack);
int		stack_sorted(t_stack **stack);
t_stack *stack_end(t_stack **stack);

	/* Swap */

int		swap(t_stack **stack);
int		sa(t_stack **stack_a);
int		sb(t_stack **stack_b);
int		ss(t_stack **stack_a, t_stack **stack_b);

#endif
