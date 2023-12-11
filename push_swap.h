/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:41:09 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/11 11:22:24 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void	insert_sort_stack(t_stack **a, t_stack **b);
void	big_sort(t_stack **a, t_stack **b);
void	normal_sort(t_stack **a, t_stack **b);

void	ft_lstadd_back(t_stack **lst, t_stack *new);;
t_stack	*ft_lstnew(int content);
int		ft_lstsize(t_stack *lst);

long	ft_atoi(char *str);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);

void	ft_error(char *a);
int		sorted(t_stack *stack);
void	ft_samearguments(t_stack *a);
void	insert_index(t_stack *a, int listsize);
int		ft_count_rot(t_stack *b, int size);
void	ft_stackfree(t_stack **stack, int error);
int		has_valid_digits(char **argv, int start, int end);

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