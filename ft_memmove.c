/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 20:43:29 by maragorn          #+#    #+#             */
/*   Updated: 2020/11/12 19:24:59 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*cdst;
	unsigned const char	*csrc;
	unsigned const char	*lasts;
	unsigned char		*lastd;

	cdst = (unsigned char*)dest;
	csrc = (const unsigned char*)src;
	if (!len || dest == src)
		return (dest);
	if (cdst < csrc)
	{
		while (len--)
			*cdst++ = *csrc++;
	}
	else
	{
		lasts = csrc + (len - 1);
		lastd = cdst + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
