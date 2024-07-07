/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:50:14 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 15:01:10 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (*b == NULL)
		return ;
	temp = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	temp->prev = NULL;
	if (*a == NULL)
	{
		*a = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *a;
		temp->next->prev = temp;
		*a = temp;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	ft_push(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	ft_push(b, a);
	write(1, "pb\n", 3);
}
