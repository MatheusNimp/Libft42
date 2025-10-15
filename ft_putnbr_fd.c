/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:38:25 by marvin            #+#    #+#             */
/*   Updated: 2025/10/15 10:38:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	c = '0';
	if (num < 0)
	{
		num = -(num);
		ft_putchar_fd('-', fd);
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = (num % 10) + '0';
	ft_putchar_fd(c, fd);
}
