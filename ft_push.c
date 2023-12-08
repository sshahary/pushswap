/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:50:14 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 10:51:58 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_stack **stack1, t_stack **stack2)
{
	t_stack	*new;
	t_stack	*temp1;
	t_stack	*temp2;

	if (ft_lstsize(*stack2) == 0)
		return (-1);
	temp1 = *stack1;
	temp2 = *stack2;
	new = temp2;
	temp2 = temp2->next;
	*stack2 = temp2;
	if (!temp1)
	{
		temp1 = new;
		temp1->next = NULL;
		*stack1 = temp1;
	}
	else
	{
		new->next = temp1;
		*stack1 = new;
	}
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
