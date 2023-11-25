/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:55:59 by sshahary          #+#    #+#             */
/*   Updated: 2023/10/20 13:14:30 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

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
}
