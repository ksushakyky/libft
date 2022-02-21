/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:46:00 by maragorn          #+#    #+#             */
/*   Updated: 2020/11/12 13:47:41 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	j;

	j = 0;
	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		if (!(array = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		array[0] = '\0';
		return (array);
	}
	else if (ft_strlen(s) < len ||
		(!(array = (char*)malloc(sizeof(char) * len + 1))))
	{
		array = (char*)malloc(sizeof(char) * (ft_strlen(s) - start) + 1);
		if (!array)
			return (NULL);
	}
	while (s[start] && j < len)
		array[j++] = s[start++];
	array[len] = '\0';
	return (array);
}
