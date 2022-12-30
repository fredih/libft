/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:13:44 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 13:09:57 by aantonio         ###   ########.fr       */
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
		if (s[i] == c)
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
	int		i;

	s = ft_strtrim(s, &c);
	wordcount = count_chars(s, c) + 1;
	result = ft_calloc(wordcount, sizeof(char *));
	i = 0;
	while (i < wordcount)
	{
		end = ft_strchr(s, c);
		if (!end)
			break ;
		result[i] = ft_substr(s, 0, end - s);
		s = ft_substr(s, end - s + 1, ft_strlen(s));
		i++;
	}
	free(end);
	result[i] = (char *)s;
	return (result);
}
