/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:19:58 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/15 21:20:01 by maamaral         ###   ########.fr       */
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
