/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:55:45 by sshahary          #+#    #+#             */
/*   Updated: 2023/10/20 17:01:40 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;
	t_list	*you;

	newlst = NULL;
	if (!(f) || !lst)
		return (NULL);
	while (lst)
	{
		you = f(lst->content);
		current = (t_list *)malloc(sizeof(t_list));
		if (!current)
		{
			ft_lstclear(&newlst, del);
			return (free(you), NULL);
		}
		current->content = you;
		current->next = NULL;
		if (!newlst)
			newlst = current;
		else
			ft_lstadd_back(&newlst, current);
		lst = lst->next;
	}
	return (newlst);
}
