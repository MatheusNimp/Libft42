/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:04:19 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/14 18:18:23 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	lencalc(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*nbrtstr(int n, int len, char *str)
{
	long	num;

	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
		while (len > 1)
		{
			str[len - 1] = (num % 10) + '0';
			num = num / 10;
			len--;
		}
		return (str);
	}
	while (len)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

char	*memalloc(int n, int len)
{
	char	*str;

	if (n == 0)
		str = malloc(2);
	if (n > 0)
		str = malloc(len + 1);
	if (n < 0)
		str = malloc(len + 2);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = lencalc(n);
	str = memalloc(n, len);
	if (!(str))
		return ((void *)0);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	if (n > 0)
	{
		str = nbrtstr(n, len, str);
		str[len] = '\0';
	}
	if (n < 0)
	{
		str = nbrtstr(n, len + 1, str);
		str[len + 1] = '\0';
	}
	return (str);
}
/*
#include <limits.h>
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_itoa(INT_MIN));
}
*/
