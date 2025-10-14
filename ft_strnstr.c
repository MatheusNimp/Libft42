/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 10:00:55 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 16:13:41 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return (haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (needle[0] == haystack[i])
		{
			while ((needle[j] == haystack[i + j])
				&& (i + j < len) && (haystack[i + j] != '\0'))
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return ((void *)0);
}
