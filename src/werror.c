/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   werror.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:57:34 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/08 14:26:35 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_werror(void)
{
	write(2, "Error\n", 6);
	exit (0);
}
