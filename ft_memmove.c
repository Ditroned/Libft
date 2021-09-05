/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppizzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:41:22 by ppizzo            #+#    #+#             */
/*   Updated: 2021/09/05 21:31:14 by ppizzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (!dst && !src)
		return (0);
	d = (char *)dst;
	s = (char *)src;
	if (d < s)
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	else
	{
		d = (char *)dst + len - 1;
		s = (char *)src + len - 1;
		while (len-- > 0)
			*d-- = *s--;
	}
	return (dst);
}
