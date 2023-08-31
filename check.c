/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:12:00 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/31 18:37:28 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(char **argv, t_contet *data)
{
	int i;
	int error;
	long long nbr;

	i = 0;
	error = 0;
	while (argv[i])
	{
		if (check_num(argv[i]))
			return (1);
		nbr = ft_atol(*argv);
		if (**data->arr > INT_MIN || **data->arr < INT_MAX)
			error = 1;
		if (check_rep(data, nbr))
			error = 1;
		if (error)
			return (1);
		**data->arr = nbr;
		i++;	
	}
	return (0);
}

int check_num(char *argv)
{
	if (!(*argv == '+' || *argv == '-' 
				|| (*argv >= '0' && *argv <= '9')))
		return (1);
	if ((*argv == '+' || *argv == '-') 
			&& !(argv[1] >= '0' && argv[1] <= '9'))
		return (1);
	while (*++argv)
	{
		if (!(*argv >= '0' && *argv <= '9'))
			return (1);
	}
	return (0);
}

int check_rep(t_contet *data, long long nbr)
{
	int i;

	i = 0;
	while (i < data->elementos)
	{
		if ((int)nbr > data->biggest)
			data->biggest = (int)nbr;
		else if ((int)nbr < data->smallest)
			data->smallest = (int)nbr;
		if ((*data->arr)[i] == nbr)
			return (1);
		i++;
	}
	return (0);
}

long long ft_atol(const char *str)
{
	long long 	resultado;
	int			signo;
	int			i;

	resultado = 0;
	signo = 1;
	i = 0;
	while (check_space(str[i]))
		i++;
	if (str[i] == ' ')
		signo = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	return (signo * resultado);
}

int check_space(int c)
{
	if (c == '\t' || c == '\r' || c == '\f' || c == ' ' \
			|| c == '\n' ||c == '\v')
		return (1);
	return (0);
}
