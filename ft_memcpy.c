/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:10:38 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/15 21:10:42 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	if (!(dest) && !(src))
		return ((void *)0);
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	while (n--)
	{
		*ptrd++ = *ptrs++;
	}
	return (dest);
}
