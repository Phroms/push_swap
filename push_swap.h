/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:55:01 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/25 21:45:17 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

	/* Estructuras creadas */

typedef struct	s_stack
{
	int value;
	int idx;
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
}t_contet

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
t_stack *node_max(t_contet **stack);
t_stack *node_min(t_contet **stack);
int		idx_sorted(t_node **stack_a);

	/* Radix_sort */

void	radix_sort(t_stack **stack_a, t_stack **stack_b);

	/* Instrucciones */

int ra(t_stack **stack_a);
int rra(t_stack **stack_a);
int rb(t_stack **stack_b);
int rrb(t_stack **stack_b);

	/* Put Stacks */

int put_stack_top_a(t_stack **stack_a, t_stack *node);
int put_stack_top_b(t_stack **stack_b, t_stack *node);
int stack_sorted(t_stack **stack);
t_node *stack_end(t_stack **stack);
