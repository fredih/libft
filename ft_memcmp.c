/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:43:28 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/29 15:43:28 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	get_str_size(char *str)
{
	int	size;

	size = 0;
	while (str[size] != 0)
	{
		size++;
	}
	return (size);
}

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	int	result;
	int	size1;
	int	size2;
	int	i;

	if (!n)
		return (0);
	size1 = get_str_size(s1);
	size2 = get_str_size(s2);
	i = 0;
	result = 0;
	while (i <= size1 && (unsigned int)i < n)
	{
		result = ((char *)s1)[i] - ((char *)s2)[i];
		if (result != 0 || i > size2)
			break ;
		i++;
	}
	return (result);
}
