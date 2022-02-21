/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksushakyky <ksushakyky@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:03:59 by maragorn          #+#    #+#             */
/*   Updated: 2022/02/21 18:36:26 by ksushakyky       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(const char *s, char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			count += 1;
		i++;
	}
	return (count + 1);
}

static char		*ft_create_word(char *mas, const char *s,
							size_t i, size_t len_w)
{
	size_t j;

	j = 0;
	while (i < len_w)
		mas[j++] = s[i++];
	mas[j] = '\0';
	return (mas);
}

static void		ft_free(char **new_array, size_t word)
{
	size_t i;

	i = 0;
	while (i < word)
		free(new_array[i++]);
	free(new_array);
}

static char		**ft_write_mas(const char *s, char **mas, char c, size_t count)
{
	size_t i;
	size_t len_w;
	size_t words;

	words = 0;
	i = 0;
	while (s[i] != '\0' && count - 1 > words)
	{
		while (s[i] == c && s[i])
			i++;
		len_w = i;
		while (s[len_w] != c && s[len_w])
			len_w++;
		if (!(mas[words] = (char*)malloc(sizeof(char) * (len_w - i) + 1)))
		{
			ft_free(mas, words);
			return (NULL);
		}
		ft_create_word(mas[words], s, i, len_w);
		words++;
		i = len_w;
	}
	mas[words] = NULL;
	return (mas);
}

char			**ft_split(char const *s, char c)
{
	char	**new_array;
	size_t	word;

	if (!s)
		return (NULL);
	word = ft_count_word(s, c);
	if (!(new_array = (char**)malloc(sizeof(char*) * word)))
		return (NULL);
	new_array = ft_write_mas(s, new_array, c, word);
	return (new_array);
}
