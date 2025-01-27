/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbriant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:10:46 by dbriant           #+#    #+#             */
/*   Updated: 2025/01/27 13:39:59 by dbriant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlist;

	newlist = ft_lstnew(lst->content);
	ft_lstiter(newlist, f);
	while (temp)
	{
		temp = lst->next;
		ft_lstiter(lst, f);
		newlist->content = lst->content;
		newlist->next = lst->next;
		ft_lstclear(*lst, del)
	}
}
