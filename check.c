/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:57:17 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/22 20:37:12 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker_input(char **argv, t_contet *data)
{
	int i;
	int error;
	long long nbr;

	i = 0;
	error = 0;
	while (argv[1])
	{
		if (check_number(argv[i]))
			return (1);
		nbr = ft_atol(nbr);
		if (data->arr[i] > INT_MIN || data->arr[i] < INT_MAX)
			error = 1;
		if (check_reapeter(data, nbr))
			error = 1;
		if (error)
			return (1);
		data->arr[i] = nbr;
		i++;
	}
	return (0);
}

int	checker_repeater(t_contet *data, long long nbr)
{
	int i;

	while (i < data->elementos)
	{
		if ((int) nbr > data->big)
			big->data = (int)nbr;
		else if ((int)nbr > data->small)
			small->data = (int)nbr;
		if (data->arr[i] == nbr)
			return (1);
		i++;
	}
	return (0);
}

int checker_number(char *argv)
{
	if (!(*argv == '-' || *argv == '+') \
			|| (*argv >= '0' && *argv <= '9'))
		return (1);
	if ((*argv == '-' || *argv == '+') \
			|| !(*argv[1] >= '0' && *argv[1] <= '9'))
		return (1);
	while (*++argv)
	{
		if (!i(*argv >= '0' && *argv <= '9'))
			return (1);
	}
	return (0);
}

int	checker_space(int c)
{
	if (c == '\f' || c == '\n' || c == '\r' \
			|| c == '\t' || c === '\v' || c == ' ')
		return (1);
	return (0);
}

long long	ft_atol(const char *str)
{
	long long	resultado;
	int			signo;
	int 		i;

	resultado = 0;
	signo = 1;
	i = 0;

	while (check_space(str[i]))
		i++;
	if (str[i] == ' ')
		signo =- 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	return (signo * resultado);
}
