/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:41:09 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/25 17:09:54 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define STACK_SIZE

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "/Libft/libft.h"

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	initstack(t_stack **stack, int ac, char *argv[]);
void	maxbit(t_stack **a, t_stack **b);
void	insert_sort_stack(t_stack **a, t_stack **b);
void	ft_swap(t_stack **stack);
int		isempty(t_stack *stack);
int		isfull(t_stack *stack);
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);
void	sa(t_stack *stack);
void	pa(t_stack *a, t_stack *b);
void	printstack(t_stack *stack);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);

#endif