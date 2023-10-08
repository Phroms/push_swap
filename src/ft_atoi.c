/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:31:56 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/08 14:04:00 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_atoi(const char *str, t_stack *stack)
{
	int				i;
	int				neg;
	long long int	result;

	i = 0;
	neg = 0;
	result = 0;
	stack->atoierror = 0;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
		if (result > ((long long int)2147483647 + 1) && neg == 1)
			stack->atoierror = 1;
		if ((result > 2147483647 && neg == 0))
			stack->atoierror = 1;
	}
	if (neg == 1)
		return (-result);
	return (result);
}
