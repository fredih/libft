/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:07:49 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 11:24:32 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*newstr;

	start = 0;
	while (ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]))
	{
		end--;
	}
	newstr = ft_substr(s1, start, end - start + 1);
	return (newstr);
}
