/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:47:54 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 10:51:50 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_stack **stack)
{
	t_stack	*top;
	t_stack	*next;
	int		temp_index;
	int		temp_data;

	if (ft_lstsize(*stack) > 2)
		return (-1);
	top = *stack;
	next = top->next;
	if (!top || !next)
		write(1, "Error\n", 6);
	temp_data = top->data;
	temp_index = top->index;
	top->data = next->data;
	top->index = next->index;
	next->data = temp_data;
	next->index = temp_index;
	return (0);
}

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
