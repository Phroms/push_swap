/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:02:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/06 16:57:52 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	data_init(t_contet *data, int argc)
{
	data->elementos = argc - 1;
	data->smallest = INT_MAX;
	data->biggest = INT_MIN;
	data->sorted = 0;
	data->idx = 0;
}

void	stack_init(t_stack **stack_a, char **argv)
{
	int		i;
	t_stack	*new;

	i = 1;
	while (argv[i])
	{
		new = new_node(ft_atoi(argv[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
	index_init(stack_a);
}

int	check_sorted(t_stack **stack_a)
{
	t_stack	*node;
	t_stack	*tmp;

	node = *stack_a;
	tmp = node->next;
	while (node->next)
	{
		if (node->value < tmp->value)
		{
			node = node->next;
			tmp = tmp->next;
		}
		else
			return (0);
	}
	return (1);
}

void	check_argv(int argc, char *s)
{
	int	i;

	if (argc < 2)
		exit(1);
	i = 0;
	while (s[i])
	{
		if (s[i] == '-' && (s[i + 1] <= '9' || s[i + 1] >= '0'))
			i++;
		else if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
		{
			write(1, "Error\n", 6);
			exit(1);
		}
	}
}

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_contet	data;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 3 || argv[1][0] == '\0')
		check_argv(argc, argv[1]);
	data_init(&data, argc);
	input_parse(&data, argv);
	stack_init(&stack_a, argv);
	if (check_sorted(&stack_a))
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		exit(1);
	}
	sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
