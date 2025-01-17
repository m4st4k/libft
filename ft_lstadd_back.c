/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbriant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:18:01 by dbriant           #+#    #+#             */
/*   Updated: 2025/01/17 12:08:52 by dbriant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!*lst)  // If the list is empty
    {
        *lst = new;  // Set the new node as the first node
    }
    else
    {
        last = ft_lstlast(*lst);  // Find the last node
        last->next = new;  // Set the next pointer of the last node to the new node
    }
    new->next = NULL;  // Ensure the new node's next pointer is NULL (it's the last node)
}

