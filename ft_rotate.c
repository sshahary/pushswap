/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:52:28 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 10:53:08 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(*stack);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_stack **a)
{
	if (rotate(a) == -1)
		return (-1);
	write(1, "ra\n", 3);
	return (0);
}

int	rb(t_stack **b)
{
	if (rotate(b) == -1)
		return (-1);
	write(1, "rb\n", 3);
	return (0);
}

int	rr(t_stack **a, t_stack **b)
{
	if ((ft_lstsize(*a) < 2) || (ft_lstsize(*b) < 2))
		return (-1);
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
	return (0);
}
