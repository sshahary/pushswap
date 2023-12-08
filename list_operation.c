/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:30:06 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 14:35:49 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*current;

	current = (*lst);
	if (!(*lst) || !(new))
	{
		(*lst) = new;
		return ;
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	new->next = NULL;
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = (*lst);
	(*lst) = new;
}

t_stack	*ft_lstnew(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (new);
	new->prev = NULL;
	new->data = content;
	new->next = NULL;
	return (new);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*current;

	current = lst;
	if (!current)
		return (current);
	while (current->next)
		current = current->next;
	return (current);
}

int	ft_lstsize(t_stack *lst)
{
	int		i;
	t_stack	*current;

	i = 0;
	current = lst;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
