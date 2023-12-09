/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:41:09 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/09 09:55:05 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define STACK_SIZE

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void	initstack(t_stack **stack, int ac, char *argv[]);
void	big_sort(t_stack **a, t_stack **b);
void	normal_sort(t_stack **a, t_stack **b);
void	insert_sort_stack(t_stack **a, t_stack **b);

void	ft_lstadd_back(t_stack **lst, t_stack *new);;
t_stack	*ft_lstnew(int content);
int		ft_lstsize(t_stack *lst);

long	ft_atoi(char *str);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);

void	ft_error(char *a);
int		sorted(t_stack *stack);
void	ft_duplicates(t_stack *a);
void	insert_index(t_stack *a, int listsize);
int		ft_count_rot(t_stack *b, int size);
void	liberator_stack(t_stack **stack, int error);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif