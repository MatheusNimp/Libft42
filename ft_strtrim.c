/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:44:05 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 16:20:34 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_find_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		found;

	i = 0;
	while (s1[i])
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (!(found))
		{
			return (i);
		}
		i++;
	}
	return (i);
}

size_t	ft_find_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		found;

	i = ft_strlen(s1);
	while (i != 0)
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (s1[i - 1] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (!(found))
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;
	size_t		end;
	char		*trim;

	i = 0;
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	trim = malloc(end - start + 1);
	if (!(trim))
		return ((void *)0);
	while (i < end - start)
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
