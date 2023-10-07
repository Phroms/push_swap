/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:59:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/07 14:51:44 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	create_stack(int argc, char **argv, t_stack *stack)
{
	int i;

	i = 0;
	while (argc > 1)
	{
		if (argv[i + 1][0] == '0' && argv[i + 1][1] == '\0')
			stack->sa[i] =0;
		else
		{
			stack->sa[i] = ft_atoi(argv[i + 1], stack);
			if (stack->atoierror == 1)
			{
				ft_free(stack);
				ft_werror();
			}
		}
		i++;
		argc--;
	}
	return (1);
}

int	init_list(int argc, t_stack *stack)
{
	stack->sa = malloc(sizeof(int) * (argc - 1));
	if (!stack->sa)
	{
		free(stack);
		return (0);
	}
	stack->sb = malloc(sizeof(int) * (argc - 1));
	if (!stack->sb)
	{
		free(stack->sa);
		free(stack);
		return (0);
	}
	stack->saux = malloc(sizeof(int) * (argc - 1));
	if (!stack->saux)
	{
		free(stack->sa);
		free(stack->sb);
		free(stack);
		return (0);
	}
	stack->len = argc - 1;
	stack->len_a = argc - 1;
	stack->len_b = 0;
	return (0);
}

void	push_swap(t_stack *stack)
{
	if (stack->len <= 3)
		array3(stack->sa, stack);
	if (stack->len == 4)
		array4(stack->sa, stack);
	if (stack->len == 5)
		array5(stack->sa, stack);
	if (stack->len > 5)
		set_index(stack);
	if (stack->len > 5 && stack->len <= 20)
	{
		split_chunks(stack ,2);
		solve(stack);
	}
	if (stack->len > 20)
	{
		split_chunks(stack, 4);
		solve(stack);
	}
	if (stack->len > 150)
	{
		split_chunks(stack, 10);
		solve(stack);
	}
}

void	ft_free(t_stack *stack)
{
	free(stack->sa);
	free(stack->sb);
	free(stack->saux);
	free(stack);
}

int	main(int argc, char **argv)
{
	t_stack *stack;

	if (argc == 1)
		return (0);
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	if (init_list(argc, stack) == 0)
		ft_werror();
	if (create_stack(argc, argv, stack) == 0)
		ft_werror();
	if (!check_arguments(argc, argv, stack))
	{
		ft_free(stack);
		return (0);
	}
	push_swap(stack);
	ft_free(stack);
	return (0);
}
