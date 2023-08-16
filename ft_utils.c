/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:12:42 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/16 20:28:01 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

long long ft_atol(const char *str)
{
	long long	resultado;
	int			signo;
	int 		i;

	resultado = 0;
	signo = 1;
	i = 0;

	while (check_space(str[i]))
		i++;
	if (str[i] == '-')
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

int checker_space(int c)
{
	if (c == '\f' || c == '\n' || c == '\r' \
			|| c == '\t' || c == '\v' || c == ' ')
		return (1);
	return (0);
}
