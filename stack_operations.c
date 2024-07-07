/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:36:15 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/11 11:21:01 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initstack(t_stack **stack, int ac, char *argv[])
{
	int		i;
	long	tmp;

	i = 1;
	if (ac < 2 || argv[1][0] == '\0')
		ft_error("Error");
	else if (ac == 2)
	{
		argv = ft_split(argv[1], ' ');
		i = 0;
	}
	while (argv[i])
	{
		tmp = ft_atoi(argv[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_stackfree(stack, 1);
		if (!has_valid_digits(argv, i, i + 1))
			ft_stackfree(stack, 1);
		ft_lstadd_back(stack, ft_lstnew(tmp));
		i++;
	}
	ft_samearguments(*stack);
}

static int	find_max_bit(t_stack **stack)
{
	t_stack	*top;
	int		max;
	int		max_bit;

	top = *stack;
	max = top->index;
	max_bit = 0;
	while (top)
	{
		if (top->index > max)
			max = top->index;
		top = top->next;
	}
	while ((max >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	big_sort(t_stack **a, t_stack **b)
{
	t_stack	*top_a;
	int		max_bit;
	int		size;
	int		i;
	int		j;

	i = 0;
	top_a = *a;
	size = ft_lstsize(top_a);
	max_bit = find_max_bit(a);
	while (i < max_bit)
	{
		j = 0;
		while (j++ < size)
		{
			top_a = *a;
			if (((top_a->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (ft_lstsize(*b) != 0)
			pa(a, b);
		i++;
	}
}

void	insert_sort_stack(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) <= 8)
		normal_sort(a, b);
	else
		big_sort(a, b);
}
