/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:37:31 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/22 19:28:26 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Librerias que utilzare */

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

/* Estructuras creadas */

typedef struct	s_stack
{
	int					value;
	int					index;
	struct	s_stack		*next;
}t_stack;

typedef struct	s_contet
{
	long long	*arr;
	int			elementos;
	int			big;
	int			small;
	int			sortex;
	int			index;
}t_contet;

/* Commienzo push_swap */

int main(int argc, char **argv);

/* Funciones creadas */

int	checker_input(char **argv, t_contet *data);
int checker_reapeater(t_contet *data, long long nbr);
int	checker_num(char argv);
int checker_space(int c);
long long	ft_atol(const char *str);
