/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:39:04 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/08 13:08:49 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

long	ft_atoi(char *str)
{
	long	r;
	long	i;
	int		s;

	r = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}

int	main(int ac, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	if (ac < 2)
		return (-1);
	check_args(ac, argv);
	a = (t_stack **)malloc(sizeof(t_stack));
	b = (t_stack **)malloc(sizeof(t_stack));
	initstack(a, ac, argv);
	if (sorted(a))
	{
		ft_stackfree(a);
		ft_stackfree(b);
		return (0);
	}
	insert_sort_stack(a, b);
	ft_stackfree(a);
	ft_stackfree(b);
	return (0);
}
