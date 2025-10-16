/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:15:14 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/15 21:15:23 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
	}
	if ((unsigned char)c == '\0')
		return ((char *)&str[i]);
	return ((void *)0);
}
