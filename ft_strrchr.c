/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:56:03 by maragorn          #+#    #+#             */
/*   Updated: 2020/11/07 18:25:24 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int last;

	last = ft_strlen((char*)s);
	while (last >= 0)
	{
		if (s[last] == c)
			return ((char*)&s[last]);
		last--;
	}
	return (NULL);
}
