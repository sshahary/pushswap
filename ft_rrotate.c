/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:53:26 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 11:01:21 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(*stack);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	rra(t_stack **a)
{
	if (reverse_rotate(a) == -1)
		return (-1);
	write(1, "rra\n", 4);
	return (0);
}

int	rrb(t_stack **b)
{
	if (reverse_rotate(b) == -1)
		return (-1);
	write(1, "rrb\n", 4);
	return (0);
}

int	rrr(t_stack **a, t_stack **b)
{
	if ((ft_lstsize(*a)) < 2 || (ft_lstsize(*b) < 2))
		return (-1);
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 1);
	return (0);
}
