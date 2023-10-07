/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:18:25 by agrimald          #+#    #+#             */
/*   Updated: 2023/10/07 14:43:15 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sa(int *sa)
{
	int tmp;

	tmp = sa[0];
	sa[0] = sa[1];
	sa[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(int *sb)
{
	int	tmp;

	tmp = sb[0];
	sb[0] = sb[1];
	sb[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(int *sa, int *sb)
{
	int	tmp;

	tmp = sa[0];
	sa[0] = sa[1];
	sa[1] = tmp;
	tmp = sb[0];
	sb[0] = sb[1];
	sb[1] = tmp;
	write(1, "ss\n", 3);
}
