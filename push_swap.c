/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:39:04 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/13 14:37:39 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void initStack(Stack *stack) {
//     stack->top = -1;
// }

// int isEmpty(Stack *stack) {
//     return stack->top == -1;
// }

// int isFull(Stack *stack) {
//     return stack->top == STACK_SIZE - 1;
// }

// void push(Stack *stack, int value) {
//     if (isFull(stack)) {
//         ft_printf(stderr, "Error: Stack is full\n");
//         exit(EXIT_FAILURE);
//     }
//     stack->data[++stack->top] = value;
// }

// int pop(Stack *stack) {
//     if (isEmpty(stack)) {
//         fprintf(stderr, "Error: Stack is empty\n");
//         exit(EXIT_FAILURE);
//     }
//     return stack->data[stack->top--];
// }

// void sa(Stack *stack) {
//     if (stack->top >= 1) {
//         int temp = stack->data[stack->top];
//         stack->data[stack->top] = stack->data[stack->top - 1];
//         stack->data[stack->top - 1] = temp;
//     }
// }

// void pa(Stack *a, Stack *b) {
//     if (!isEmpty(b)) {
//         push(a, pop(b));
//     }
// }
// void printStack(Stack *stack) {
//     for (int i = 0; i <= stack->top; ++i) {
//         printf("%d ", stack->data[i]);
//     }
//     printf("\n");
// }

// int main() {
//     Stack a, b;
//     initStack(&a);
//     initStack(&b);

//     // Add your code to populate stack a with random numbers

//     // Add your sorting algorithm here using the provided operations

//     // Print the sorted stack a
//     printf("Sorted Stack A: ");
//     printStack(&a);

//     return 0;
// }

void	insert_sort(int arr[], int n)
{
	int		i;
	int		sor;
	int		j;

	i = 1;
	while (i < n)
	{
		sor = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > sor)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = sor;
		i++;
	}
}
#include <stdio.h>

int	main(void)
{
	int	arr[] = {12, 11, 13, 5, 6};
	int	n = sizeof(arr) / sizeof(arr[0]);
	int	i;

	i = 0;
	insert_sort(arr, n);
	printf("sorted: ");
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
