/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:14:37 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 16:21:23 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		size;
	size_t		len_s;
	char		*sub;

	len_s = ft_strlen(s);
	if (start > len_s)
		size = 0;
	else if (len_s - start < len)
		size = len_s - start;
	else
		size = len;
	sub = malloc(size + 1);
	if (!(sub))
		return ((void *)0);
	i = 0;
	while (i < size)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
