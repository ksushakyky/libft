/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:47:26 by maragorn          #+#    #+#             */
/*   Updated: 2020/11/12 13:52:17 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sum;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((s1 == 0 && s2 == 0) || s1 == 0)
		return (NULL);
	sum = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!sum)
		return (NULL);
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		while (i < ft_strlen(s1))
		{
			sum[i] = s1[i];
			i++;
		}
		while (i < (ft_strlen(s1) + ft_strlen(s2)))
		{
			sum[i++] = s2[j++];
		}
	}
	sum[i] = '\0';
	return (sum);
}
