/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:16:00 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/15 21:16:03 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	size_t		size;
	char		*cpy;

	size = ft_strlen(s) + 1;
	cpy = malloc(size);
	i = 0;
	if (!(cpy))
		return ((void *)0);
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
