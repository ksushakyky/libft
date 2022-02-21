/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:55:43 by maragorn          #+#    #+#             */
/*   Updated: 2020/11/25 21:40:30 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strtrim_end(const char *s1, const char *set)
{
	int		i;
	size_t	end;

	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_strchr(set, s1[i]) != 0)
		i--;
	end = i;
	return (end);
}

static int		ft_strtrim_start(const char *s1, const char *set)
{
	int		j;
	size_t	start;

	j = 0;
	while (s1[j] != '\0' && ft_strchr(set, s1[j]) != 0)
		j++;
	start = j;
	return (start);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	int		i;
	int		j;
	size_t	len;

	if (!s1)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return ((char*)s1);
	i = ft_strtrim_end(s1, set);
	j = ft_strtrim_start(s1, set);
	len = 0;
	if (i >= j)
	{
		if (!(s2 = (char*)malloc(sizeof(char) * i - j + 2)))
			return (NULL);
	}
	else
		return (ft_strdup(""));
	while (j <= i)
		s2[len++] = s1[j++];
	s2[len] = '\0';
	return (s2);
}
