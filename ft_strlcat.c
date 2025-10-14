/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:02:14 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 16:07:08 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		dst_len;
	size_t		cpy_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (dstsize > dst_len)
		cpy_len = dstsize - dst_len - 1;
	else
		cpy_len = 0;
	while (src[i] && (cpy_len > i))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < dstsize)
	{
		dst[dst_len + i] = '\0';
	}
	return (dst_len + ft_strlen(src));
}
