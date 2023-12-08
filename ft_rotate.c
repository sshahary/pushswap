/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:52:28 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 15:00:49 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (!*stack || !(*stack)->next)
		return ;
	head = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	tail = head;
	while (tail->next)
		tail = tail->next;
	tail->next = head;
	head->prev = tail;
	head->next = NULL;
}

void	ra(t_stack **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}
