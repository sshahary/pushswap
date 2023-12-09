/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:24:23 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/09 09:14:17 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_index(t_stack *a, int listsize)
{
	int		index;
	int		lowest_value;
	t_stack	*new;
	t_stack	*lowest_ptr;

	index = 1;
	while (index <= listsize)
	{
		lowest_value = 2147483647;
		new = a;
		lowest_ptr = NULL;
		while (new)
		{
			if (new->index == 0 && new->data <= lowest_value)
			{
				lowest_ptr = new;
				lowest_value = new->data;
			}
			new = new->next;
		}
		if (lowest_ptr != NULL)
			lowest_ptr->index = index;
		index++;
	}
}

int	ft_count_rot(t_stack *b, int size)
{
	t_stack	*ptr;
	int		i;

	i = 0;
	ptr = b;
	if (!ptr)
		return (0);
	while (i != size && ptr)
	{
		if (ptr->index == size)
			return (i);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
