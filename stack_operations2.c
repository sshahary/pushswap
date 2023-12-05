/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:16:46 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/05 12:28:47 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack **stack, int x)
{
	t_stack	*top;
	int		min;

	head = *stack;
	min = top->index;
	while (top->next)
	{
		top = top->next;
		if ((top->index < min) && (top->index != x))
			min = head->index;
	}
	return (min);
}

void	sortthree(t_stack **a)
{
	t_stack	*top;
	int		min;
	int		nex_min;

	top = *a;
	min = ft_min(a, -1);
	nex_min = ft_min(a, min);
}

