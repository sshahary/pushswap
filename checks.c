/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:43:44 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/05 13:03:26 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *a)
{
	write(1, &a, 1);
	write(1, "\n", 1);
	exit(0);
}

int	check_argv_contain(int x, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == x)
			return (1);
		i++;
	}
	return (0);
}

int	check_num(char *str)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!(num[i] >= 0 && num[i] <= 9))
			return (0);
		i++;
	}
	return (1);
}

void	check_args(int ac, char **argv)
{
	int		i;
	long	tmp;
	char	**args;

	i = 0;
	if (ac == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!(check_num(args[i])))
			ft_error("Error");
		if (check_argv_contain(tmp, args, i))
			ft_error("Error");
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error("Error");
		i++;
	}
	if (ac == 2)
		freeft(args);
}
