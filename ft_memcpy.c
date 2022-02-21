/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:49:04 by maragorn          #+#    #+#             */
/*   Updated: 2020/11/09 18:38:02 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*cdst;
	unsigned const char *csrc;
	size_t				i;

	cdst = (unsigned char*)dst;
	csrc = (const unsigned char*)src;
	i = 0;
	if (!n || dst == src)
		return (dst);
	while (i < n)
	{
		*cdst++ = *csrc++;
		i++;
	}
	return (dst);
}
