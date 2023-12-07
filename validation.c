/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:24:23 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/07 14:05:31 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeft(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
}

int	sorted(t_stack **stack)
{
	t_stack	*top;

	top = *stack;
	while (top && top->next)
	{
		if (top->data > top->next->data)
			return (0);
		top = top->next;
	}
	return (1);
}

int	ft_indexcount(t_stack **stack, int index)
{
	t_stack	*top;
	int		i;

	i = 0;
	top = *stack;
	while (top)
	{
		if (top->index == index)
			break ;
		i++;
		top = top->next;
	}
	return (i);
}

void	top_index(t_stack **stack, int count)
{
	t_stack	*top;
	int		tmp;

	if (count == 0)
		return ;
	top = *stack;
	tmp = ft_lstsize(top) - count;
	if (count <= (ft_lstsize(top) / 2))
	{
		while (count > 0)
		{
			ra(stack);
			count--;
		}
	}
	else
	{
		while (tmp > 0)
		{
			rra(stack);
			tmp--;
		}
	}
}

void	ft_stackfree(t_stack **stack)
{
	t_stack	*top;
	t_stack	*tmp;

	top = *stack;
	while (top)
	{
		tmp = top;
		top = top->next;
		free(tmp);
	}
	free(stack)
}
