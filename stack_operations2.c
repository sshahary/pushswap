/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:16:46 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/09 09:12:08 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_highest(t_stack *a)
{
	t_stack	*new;
	int		data;

	new = a;
	data = new->index;
	while (new)
	{
		if (new->index > data)
			data = new->index;
		new = new->next;
	}
	return (data);
}

static int	ft_lowest(t_stack *a)
{
	t_stack	*new;
	int		data;

	new = a;
	data = new->index;
	while (new)
	{
		if (new->index < data)
			data = new->index;
		new = new->next;
	}
	return (data);
}

void	sort_three(t_stack **a)
{
	int	highest;
	int	lowest;

	if (sorted(*a) == 1)
		return ;
	highest = ft_highest(*a);
	lowest = ft_lowest(*a);
	if ((*a)->index == highest)
	{
		if ((*a)->next->index == lowest)
			ra(a);
		else
			(ra(a), sa(a));
	}
	else if ((*a)->index == lowest)
		(rra(a), sa(a));
	else
	{
		if ((*a)->next->index == lowest)
			sa(a);
		else
			rra(a);
	}
}

static void	sort_eight(t_stack **a, t_stack **b, int size)
{
	int	i;
	int	count_rot;
	int	count_revrot;

	i = 0;
	while (i++ < size - 3)
	{
		count_rot = ft_count_rot(*b, size);
		count_revrot = size - count_rot;
		if (count_rot <= count_revrot)
		{
			while ((*a)->index != i)
				ra(a);
			pb(a, b);
		}
		else
		{
			while ((*a)->index != i)
				rra(a);
			pb(a, b);
		}
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}

void	normal_sort(t_stack **a, t_stack **b)
{
	int	size;

	if (sorted(*a) || ft_lstsize(*a) == 0 || ft_lstsize(*a) == 1)
		return ;
	size = ft_lstsize(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_three(a);
	else if (size <= 8)
		sort_eight(a, b, size);
}
