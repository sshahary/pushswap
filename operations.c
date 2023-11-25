/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:09:51 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/25 17:06:11 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	if (ft_swap(a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
}

void	sb(t_stack **b)
{
	if (ft_swap(b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
}

void	pa(t_stack *a, t_stack *b)
{
	if (!isempty(b))
	{
		push(a, pop(b));
	}
}