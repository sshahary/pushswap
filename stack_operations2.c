/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:16:46 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/05 13:34:08 by sshahary         ###   ########.fr       */
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
	if (sorted(a))
		return ;
	if (top->index == min && top->next->index != nex_min)
	{
		ra(a);
		sa(a);
		rra(a);
	}
	else if (top->index == nex_min)
	{
		if (top->next->index == min)
			sa(a);
		else
			rra(a);
	}
	else
	{
		if (top->next->index == min)
			ra(a);
		else
		{
			sa(a);
			rra(a);
		}
	}
}

void	sortfour(t_stack **a, t_stack **b)
{
	int	count;

	if (sorted(a))
		return ;
	count = ft_indexcount(a, ft_min(a, -1));
	if (count == 1)
		ra(a);
	else if (count == 2)
	{
		ra(a);
		ra(a);
	}
	else if (count == 3)
		rra(a);
	if (sorted(a))
		return ;
	pb(a, b);
	sortthree(a);
	pa(a, b);
}

void	sortfive(t_stack **a, t_stack **b)
{
	int	count;

	count = ft_indexcount(a, ft_min(a, -1));
	if (count == 1)
		ra(a);
	else if (count == 2)
	{
		ra(a);
		ra(a);
	}
	else if (count == 3)
	{
		rra(a);
		rra(a);
	}
	else if (count == 4)
		rra(a);
	if (sorted(a))
		return ;
	pb(a, b);
	sortfour(a, b);
	pa(a, b);
}

void	normal_sort(t_stack **a, t_stack **b)
{
	int	size;

	if (sorted(a) || ft_lstsize(*a) == 0 || ft_lstsize(*a) == 1)
		return ;
	size = ft_lstsize(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		sortthree(a);
	else if (size == 4)
		sortfour(a, b);
	else if (size == 5)
		sortfive(a, b);
}
