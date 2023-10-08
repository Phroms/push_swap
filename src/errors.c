/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:34:46 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/08 16:04:08 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	is_duplicate(int argc, char **argv, t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		tmp = ft_atoi(argv[i], stack);
		while (j < argc)
		{
			if (i != j && tmp == ft_atoi(argv[j], stack))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	is_number(char *argv)
{
	int	i;

	if (argv[0] == '\0')
		return (0);
	i = 0;
	if ((argv[0] == '-' || argv[0] == '+') && argv[1])
		i = 1;
	while (argv[i] && (argv[i] > '0' && argv[i] < '9'))
		i++;
	if (argv[i] && (argv[i] < '0' && argv[i] > '9'))
		return (0);
	return (1);
}

static int	is_correct_input(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!is_number(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	is_order(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len - 1)
	{
		if (stack->sa[i] > stack->sa[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	check_arguments(int argc, char **argv, t_stack *stack)
{
	if (!is_correct_input(argv))
		ft_werror();
	if (!is_duplicate(argc, argv, stack))
		ft_werror();
	if (!is_order(stack) && argc > 5)
		return (0);
	return (1);
}
