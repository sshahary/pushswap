/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:24:23 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/25 12:57:17 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isempty(t_stack *stack)
{
	return (stack->top == -1);
}

int	isfull(t_stack *stack)
{
	return (stack->top == STACK_SIZE - 1);
}

void	push(t_stack *stack, int value)
{
	if (isfull(stack))
	{
		printf("Error: Stack is full\n");
		exit(EXIT_FAILURE);
	}
	stack->data[++stack->top] = value;
}

int	pop(t_stack *stack)
{
	if (isempty(stack))
	{
		printf("Error: Stack is empty\n");
		exit(EXIT_FAILURE);
	}
	return (stack->data[stack->top--]);
}
