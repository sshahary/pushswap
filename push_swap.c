/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:39:04 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/01 16:53:17 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_stack **stack)
{
	t_stack	*top;
	t_stack	*next;
	int		temp_index;
	int		temp_data;

	if (ft_lstsize(*stack) > 2)
		return (-1);
	top = *stack;
	next = top->next;
	if (!top || !next)
		write(1, "Error\n", 6);
	temp_data = top->data;
	temp_index = top->index;
	top->data = next->data;
	top->index = next->index;
	next->data = temp_data;
	next->index = temp_index;
	return (0);
}

int	ft_push(t_stack **stack1, t_stack **stack2)
{
	t_stack	*new;
	t_stack	*temp1;
	t_stack	*temp2;

	if (ft_lstsize(*stack2) == 0)
		return (-1);
	temp1 = *stack1;
	temp2 = *stack2;
	new = temp2;
	temp2 = temp2->next;
	*stack2 = temp2;
	if (!temp1)
	{
		temp1 = new;
		temp1->next = NULL;
		*stack1 = temp1;
	}
	else
	{
		new->next = temp1;
		*stack1 = new;
	}
	return (0);
}

int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(*stack);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	reverse_rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(*stack);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	main(int ac, char *argv[])
{
	t_stack	**a;
	t_stack	**b;

	if (ac < 2)
		return (-1);
	checkError(ac, argv);
	a = (t_stack **)malloc(sizeof(t_stack *));
	b = (t_stack **)malloc(sizeof(t_stack *));
	*a = NULL;
	*b = NULL;
	initstack(a, ac, argv);
	return (0);
}
