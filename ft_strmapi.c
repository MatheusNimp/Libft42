/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:39:01 by marvin            #+#    #+#             */
/*   Updated: 2025/10/15 09:39:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*cpy;

	if (!(s) || !(f))
		return ((void *)0);
	size = ft_strlen(s);
	i = 0;
	cpy = malloc(size + 1);
	if (!(cpy))
		return ((void *)0);
	while (i < size)
	{
		cpy[i] = f(i,s[i]);
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
