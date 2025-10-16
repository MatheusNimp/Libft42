/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:07:45 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/15 21:07:49 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	total = size * count;
	ptr = malloc(total);
	if (!(ptr))
		return ((void *) 0);
	ft_bzero(ptr, total);
	return (ptr);
}
