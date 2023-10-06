/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:15:20 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/06 16:57:31 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(char *argv)
{
	int	i;

	i = 0;
	if (argv[0] == '-')
		i++;
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	check_rep(long tmp, char **argv, int i, t_contet *data)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == tmp)
			return (1);
		if (tmp > data->biggest)
			data->biggest = tmp;
		else if (tmp < data->smallest)
			data->smallest = tmp;
		i++;
	}
	return (0);
}

void	input_parse(t_contet *data, char **argv)
{
	int		i;
	long	tmp;

	i = 1;
	while (argv[i])
	{
		tmp = ft_atoi(argv[i]);
		if (check_num(argv[i]))
			ft_error();
		if (check_rep(tmp, argv, i, data))
			ft_error();
		if (tmp < INT_MIN || tmp > INT_MAX)
			ft_error();
		i++;
	}
}

long	ft_atoi(const char *str)
{
	int		signo;
	long	i;
	long	resultado;

	resultado = 0;
	signo = 1;
	i = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = (resultado * 10) + (str[i] - '0');
		i++;
	}
	return (signo * resultado);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}
