/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:25:21 by sshahary          #+#    #+#             */
/*   Updated: 2023/12/09 11:58:01 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	count_words(const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s && s[k] != '\0')
	{
		if (s[k] == c)
		{
			if (j)
				j = 0;
		}
		else if (!j)
		{
			i++;
			j = 1;
		}
		k++;
	}
	if (i == 0)
		exit(1);
	return (i);
}

static void	ft_free(char	**str)
{
	int		i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
}

static void	fill_ints(size_t *ints)
{
	ints[0] = 0;
	ints[1] = 0;
	ints[2] = 0;
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	if ((s[0] == '\0' || start >= ft_strlen(s) || len == 0))
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = -1;
	str = (char *) malloc(len + 1);
	if (!str)
		return (NULL);
	while (++i < (int) len)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	ints[3];

	fill_ints(ints);
	if (!s)
		return (NULL);
	str = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s && s[ints[2]] != '\0' && count_words(s, c))
	{
		while (s[ints[2]] && s[ints[2]] == c)
			ints[2]++;
		ints[0] = ints[2];
		while (s[ints[2]] && s[ints[2]] != c)
			ints[2]++;
		str[ints[1]] = ft_substr(s, ints[0], ints[2] - ints[0]);
		if (!str[ints[1]++])
			return (ft_free(str), NULL);
		while (s[ints[2]] && s[ints[2]] == c)
			ints[2]++;
	}
	str[count_words(s, c)] = NULL;
	return (str);
}
