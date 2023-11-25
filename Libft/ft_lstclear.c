/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:31:11 by sshahary          #+#    #+#             */
/*   Updated: 2023/10/20 13:44:13 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	current = (*lst);
	if (!lst || !del)
		return ;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	(*lst) = NULL;
}
