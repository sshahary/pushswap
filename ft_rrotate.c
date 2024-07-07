/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:53:26 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 14:24:15 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rrotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (!*stack || !(*stack)->next)
		return ;
	head = *stack;
	tail = head;
	while (tail->next)
		tail = tail->next;
	tail->prev->next = NULL;
	tail->prev = NULL;
	tail->next = head;
	head->prev = tail;
	*stack = tail;
}

void	rra(t_stack **a)
{
	ft_rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	ft_rrotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	ft_rrotate(a);
	ft_rrotate(b);
	write(1, "rrr\n", 1);
}
