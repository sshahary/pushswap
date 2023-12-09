/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:43:44 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/09 12:01:56 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, "\n", 1);
	exit(1);
}

int	sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	ft_stackfree(t_stack **stack, int error)
{
	t_stack	*new;
	t_stack	*tmp;

	new = *stack;
	while (new)
	{
		tmp = new;
		new = new->next;
		free(tmp);
	}
	new = NULL;
	tmp = NULL;
	*stack = NULL;
	if (error == 1)
		ft_error("Error");
}

void	ft_samearguments(t_stack *a)
{
	t_stack	*new;

	while (a)
	{
		new = a->next;
		while (new)
		{
			if (a->data == new->data)
				ft_stackfree(&a, 1);
			new = new->next;
		}
		a = a->next;
	}
}
