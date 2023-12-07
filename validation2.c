/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:34:12 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/07 14:15:35 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*stack_next_min(t_stack **stack)
{
	t_stack	*top;
	t_stack	*min;
	int		flag;

	min = NULL;
	flag = 0;
	top = *stack;
	if (top)
	{
		while (top)
		{
			if ((top->index == -1) && (!flag || top->data < min->data))
			{
				min = top;
				flag = 1;
			}
			top = top->next;
		}
	}
	return (min);
}

void	stackindex(t_stack **stack)
{
	t_stack	*top;
	int		i;

	i = 0;
	top = stack_next_min(stack);
	while (top)
	{
		top->index = i++;
		top = stack_next_min(stack);
	}
}
