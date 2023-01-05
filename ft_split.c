/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:13:44 by aantonio          #+#    #+#             */
/*   Updated: 2023/01/05 17:27:29 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_chars(char const*s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		wordcount;
	char	*end;
	char	*words;
	char	*trimmed;
	int		i;

	if (!s)
		return (0);
	trimmed = ft_strtrim(s, &c);
	if (!s[0])
	{
		result = ft_calloc(1, sizeof(char *));
		return (result);
	}
	wordcount = count_chars(trimmed, c) + 1;
	result = ft_calloc(wordcount + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	words = trimmed;
	while (i < wordcount)
	{
		end = ft_strchr(words, c);
		if (!end)
			break ;
		result[i++] = ft_substr(words, 0, end - words);
		while (*end == c)
			end++;
		words = end;
	}
	result[i] = ft_substr(words, 0, ft_strlen(words));
	free(trimmed);
	return (result);
}
