/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:12:01 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/15 21:12:06 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;

	if (!(dest) && !(src))
		return ((void *) 0);
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (ptrd > ptrs && ptrd < ptrs + n)
	{
		while (n--)
		{
			ptrd[n] = ptrs[n];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
