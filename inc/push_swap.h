/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:33:36 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/07 14:46:38 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/* Comienzo de PUSH_SWAP */

	/* Estructura */

typedef struct	s_stack
{
	int	*sa;
	int	*sb;
	int	*saux;
	int	len;
	int	len_a;
	int	len_b;
	int	atoierror;
	int	memsolv;
}t_stack;

	/* Erros */

//int		is_duplicate(int argc, char **argv, t_stack *stack);
//int		is_number(char **argv);
//int		is_correct_input(char **argv);
//int		is_order(t_stack *stack);
int		check_arguments(int argc, char **argv, t_stack *stack);

	/* Werror */ 

void	ft_werror(void);

	/* Array3 */

void	array3(int *a, t_stack *stack);

	/* Array4 */

void	array4(int *a, t_stack *stack);

	/* Array5 */

//int		f_aux(int *a, t_stack *stack, int aux);
void	array5(int *a, t_stack *stack);

	/* Atoi */

int		ft_atoi(const char *str, t_stack *stack);

	/* Pa */

void	swap(int *a1, int *a2);
void	pa(t_stack *stack);

	/* Pb */

void	pb (t_stack *stack);

	/* Push_swap.c */

//int		create_stack(int argc, char *argv, t_stack *stack);
//int		init_list(int argc, t_stack *stack);
//void	push_swap(t_stack *stack);
void	ft_free(t_stack *stack);
int		main(int argc, char **argv);

	/* Rr */ 

//void	ra(t_stack *stack);
//void	rb(t_stack *stack);
void	rr(t_stack *stack, char r_a_b);

	/* Rrr */

//void	rra(t_stack *stack);
//void	rrb(t_stack *stack);
void	rrr(t_stack *stack, char r_a_b);

	/* Set Index */

void	set_index(t_stack *stack);

	/* Split chunks */

void	split_chunks(t_stack *stack, int num);
//int		aux_rr(t_stack *stack, int aux_exit, int i);
//int		aux_rrr(t_stack *stack, int aix_exit, int i);
void	solve(t_stack *stack);

	/* Ss */

void	sa(int *sa);
void	sb(int *sb);
void	ss(int *sa, int *sb);

#endif
