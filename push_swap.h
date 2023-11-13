/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:41:09 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/13 13:48:59 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define STACK_SIZE

# include <stdio.h>
# include <stdlib.h>

typedef struct s
{
	int	data[STACK_SIZE];
	int	top;
}	t_Stack;

#endif