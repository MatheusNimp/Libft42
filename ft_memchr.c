/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:34:29 by marvin            #+#    #+#             */
/*   Updated: 2025/09/26 09:34:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char *) s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void * )str);
		str++;
		n--;
	}
	return ((void *) 0);
}
