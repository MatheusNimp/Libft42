/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:50:18 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/15 21:05:22 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;
	void	*l_content;

	if (!(f) || !(lst) || !(del))
		return ((void *)0);
	new_n = NULL;
	new_l = NULL;
	while (lst)
	{
		l_content = f(lst -> content);
		new_l = ft_lstnew(l_content);
		if (!(new_l))
		{
			del(l_content);
			ft_lstclear(&new_n, del);
			return ((void *)0);
		}
		ft_lstadd_back(&new_n, new_l);
		lst = lst -> next;
	}
	return (new_n);
}
