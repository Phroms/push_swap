/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:10:47 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/30 23:19:34 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack **stack_b;
	t_contet *data = NULL;

	if (argc < 3 || argv[1][0] == '\0')
		ft_free_input(data);
	data = ini_contet(argc - 1);
	if (check_input(argv + 1, data))
		ft_free_input(data);
	stack_a = (t_stack **)malloc(sizeof(t_stack *));
	stack_b = (t_stack **)malloc(sizeof(t_stack *));
	*stack_a = NULL;
	*stack_b = NULL;
	if (!stack_a || !stack_b)
		ft_free_input(data);
	ft_stack_init(stack_a, &data);
	sort(stack_a, stack_b);
	data->elementos = argc - 1;
	free_all(stack_a, stack_b, data);
	return (0);
}
