/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:38:04 by maragorn          #+#    #+#             */
/*   Updated: 2020/11/09 14:51:47 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ary;

	ary = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*ary == (unsigned char)c)
			return (ary);
		ary++;
	}
	return (NULL);
}
