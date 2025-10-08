/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:56:14 by marvin            #+#    #+#             */
/*   Updated: 2025/10/07 15:56:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		s1_size;
	size_t		s2_size;
	char		*join;

	i = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	join = malloc(s1_size + s2_size + 1);
	if (!(join))
		return ((void *)0);
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		join[s1_size + i] = s2[i];
		i++;
	}
	join[s1_size + i] = '\0';
	return (join);
}
