/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:43:44 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 16:24:09 by sshahary         ###   ########.fr       */
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

void	liberator_stack(t_stack **stack, int error)
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

void	ft_duplicates(t_stack *a)
{
	t_stack	*new;

	while (a)
	{
		new = a->next;
		while (new)
		{
			if (a->data == new->data)
				liberator_stack(&a, 1);
			new = new->next;
		}
		a = a->next;
	}
}
