/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:55:01 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/31 19:49:40 by agrimald         ###   ########.fr       */
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
	int idx; // es index y es el indice del nodo;
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
		
	/* Check */

long long	ft_atol(const char *str);
int			check_input(char **argv, t_contet *data);
int			check_num(char *argv);
int			check_rep(t_contet *data, long long nbr);
int			check_space(int c);

	/* Data */

t_contet	*ini_contet(int stacks);
int sorted(t_contet *data);
int min_dex(t_stack **stack_a);
int	in_sorted(t_stack **stack_a, int elementos);

	/* Free */

void	ft_free_input(t_contet *data);
void	free_all(t_stack **stack_a, t_stack **stack_b, t_contet *data);
void	free_a(t_stack **stack_a);
void	free_b(t_stack **stack_b);
void	free_data(t_contet *data);

	/* Index */

void	sort_index(t_stack **stack_a, t_contet *data);
t_stack *node_max_i(t_stack **stack);
t_stack *node_min_i(t_stack **stack);
int		idx_sorted(t_stack**stack_a);

	/* Radix_sort */

void	radix_sort(t_stack **stack_a, t_stack **stack_b);

	/* Instrucciones Swap */

int	swap(t_stack **stack);
int sa(t_stack **stack_a);
int sb(t_stack **stack_b);
int	ss(t_stack **stack_a, t_stack **stack_b);

	/* Instrucciones Push */

int push(t_stack **stack_to, t_stack **stack_from);
int pa(t_stack **stack_a, t_stack **stack_b);
int pb(t_stack **stack_b, t_stack **stack_a);

	/* Instrucciones Rotate */

int	rotate(t_stack **stack);
int	reverse_rot(t_stack **stack);
int ra(t_stack **stack_a);
int rra(t_stack **stack_a);
int rb(t_stack **stack_b);
int rrb(t_stack **stack_b);

	/* Put Stacks */

int put_stack_top_a(t_stack **stack_a, t_stack *node);
int put_stack_top_b(t_stack **stack_b, t_stack *node);
int stack_sorted(t_stack **stack);
t_stack *stack_end(t_stack **stack);

	/* Stacks */

void	ft_stack_init(t_stack **stack_a, t_contet **data);
int		size_stack(t_stack *stack);

	/* Sort */

void	sort(t_stack **stack_a, t_stack **stack_b);
void	sort2(t_stack **stack_a);
void	sort3(t_stack **stack_a);
void	sort4(t_stack **stack_a, t_stack **stack_b);
void	sort5(t_stack **stack_a, t_stack **stack_b);

	/* Nodes */

t_stack *lst_new(int idx, int value);
void	add_back(t_stack **stack, t_stack *new);
t_stack	*stack_last(t_stack *stack);
t_stack	node_max(t_stack **stack);
t_stack	node_min(t_stack **stack);

#endif
