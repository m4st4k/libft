/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbriant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:09:04 by dbriant           #+#    #+#             */
/*   Updated: 2024/12/31 17:56:35 by dbriant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (n--)
	{
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		ptr1++;
		ptr2++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	sizelittle;

	sizelittle = ft_strlen(little);
	if (sizelittle == 0)
	{
		return ((char *)big);
	}
	while (*big && len >= sizelittle)
	{
		if (ft_memcmp(big, little, sizelittle) == 0)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
