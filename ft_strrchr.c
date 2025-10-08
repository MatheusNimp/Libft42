/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 12:32:06 by marvin            #+#    #+#             */
/*   Updated: 2025/09/13 12:32:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);

	if ((unsigned char) c == '\0')
		return ((char *) &s[i]);
	while (i > 0)
	{
		i--;
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
	}
	return ((void *)0);
}