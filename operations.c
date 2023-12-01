/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:09:51 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/01 17:04:22 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack **a)
{
	if (ft_swap(a) == -1)
		return (-1);
	write(1, "sa\n", 3);
	return (0);
}

int	sb(t_stack **b)
{
	if (ft_swap(b) == -1)
		return (-1);
	write(1, "sb\n", 3);
	return (0);
}

int	ss(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) < 2 || (ft_lstsize(*b) < 2))
		return (-1);
	ft_swap(a);
	ft_swap(b);
	write (1, "ss\n", 3);
	return (0);
}

int	pa(t_stack **a, t_stack **b)
{
	if (ft_push(a, b) == -1)
		return (-1);
	write(1, "pa\n", 3);
	return (0);
}

int	pb(t_stack **a, t_stack **b)
{
	if (ft_push(b, a) == -1)
		return (-1);
	write(1, "pb\n", 3);
	return (0);
}
