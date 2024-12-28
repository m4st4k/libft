/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbriant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:52:08 by dbriant           #+#    #+#             */
/*   Updated: 2024/12/28 17:24:37 by dbriant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	sized;
	size_t	sizes;
	size_t	i;

        sized = ft_strlen((char *)dest);
        sizes = ft_strlen((char *)src);
        
        char	*temp = (char *)malloc(sized + sizes);
	i = 0;
	if (!n || ((dest == NULL) && (src == NULL)))
	{
		return ((char *)dest);
	}
	
	while (n && sized && sizes)
	{
		temp[i] = ((char *)src)[i];
		((char *)dest)[i] = temp[i];
		src++;
		i++;
		n--;
	}
	return ((char *)dest);
}
