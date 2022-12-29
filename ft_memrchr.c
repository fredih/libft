/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 10:01:58 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/29 15:33:36 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;

	i = n;
	while (i >= 1)
	{
		if (((char *)s)[i - 1] == c)
			return ((char *)s + i - 1);
		i--;
	}
	return (0);
}
