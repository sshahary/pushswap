/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:39:04 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/25 17:01:00 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
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
}

int	main(int ac, char *argv[])
{
	t_stack	**a;
	t_stack	**b;

	if (argc < 2)
		return (-1);
	checkError(ac, argv);
	a = (t_stack **)malloc(sizeof(t_stack *));
	b = (t_stack **)malloc(sizeof(t_stack *));
	*a = NULL;
	*b = NULL;
	initstack(a, ac, argv);
	return (0);
}
