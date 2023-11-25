/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:36:15 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/25 16:37:40 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initstack(t_stack **stack, int ac, char *argv[])
{
	t_stack	*new;
	char	*strtoint[];
	int		i;

	i = 0;
	if (ac == 2)
		strtoint = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		strtoint = argv;
	}
	while (argv[i])
	{
		new = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
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

void	maxbit(t_stack **a, t_stack **b)
{
	int	max_bit;
	int	size;
	int	i;

	max_bit = find_max_bit(*a);
	size = ft_lstsize(*a);
	i = 0;
	while (i < max_bit)
	{
		while (0 < size)
		{
			if (((*a->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			size--;
		}
		while (ft_lstsize(*b) != 0)
			pa(a, b);
		i++;
	}
}

void	insert_sort_stack(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) > 5)
		maxbit_sort(*a, *b);
	else
		normal_sort(*a, *b);
}

void	printstack(t_stack *stack)
{
	int	i;

	i = 0;
	while (i <= stack->top)
	{
		printf("%d ", stack->data[i]);
		++i;
	}
	printf("\n");
}
