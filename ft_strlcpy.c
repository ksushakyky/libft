/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:28:21 by maragorn          #+#    #+#             */
/*   Updated: 2020/11/12 19:10:39 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t cdstsize;
	size_t i;

	i = 0;
	cdstsize = 0;
	if (dst == 0)
		return (0);
	while (src[cdstsize])
		cdstsize++;
	if (dstsize == 0)
		return (cdstsize);
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (cdstsize);
}
