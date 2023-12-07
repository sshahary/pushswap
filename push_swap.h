/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:41:09 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/07 14:18:16 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define STACK_SIZE

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
//# include "Libft/libft.h"

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	initstack(t_stack **stack, int ac, char *argv[]);
void	maxbit(t_stack **a, t_stack **b);
void	normal_sort(t_stack **a, t_stack **b);
void	insert_sort_stack(t_stack **a, t_stack **b);
int		ft_swap(t_stack **stack);
int		ft_push(t_stack **stack1, t_stack **stack2);
int		rotate(t_stack **stack);
int		reverse_rotate(t_stack **stack);
void	printstack(t_stack *stack);

void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(void *content);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);

void	freeft(char **str);
void	ft_error(char *a);
int		check_argv_contain(int x, char **argv, int i);
int		check_num(char *str);
void	check_args(int ac, char **argv);
int		sorted(t_stack **stack);
int		ft_indexcount(t_stack **stack, int index);
void	top_index(t_stack **stack, int count);
void	ft_stackfree(t_stack **stack);
void	stackindex(t_stack **stack);

int		sa(t_stack **a);
int		sb(t_stack **b);
int		ss(t_stack **a, t_stack **b);
int		pa(t_stack **a, t_stack **b);
int		pb(t_stack **a, t_stack **b);
int		ra(t_stack **a);
int		rb(t_stack **b);
int		rr(t_stack **a, t_stack **b);
int		rra(t_stack **a);
int		rrb(t_stack **b);
int		rrr(t_stack **a, t_stack **b);

#endif