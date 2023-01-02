/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:32:19 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/29 08:32:19 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stddef.h>

unsigned long	ft_strlcat(char *dest, char *src, size_t destsize)
{
	size_t	i;
	size_t	dest_length;

	dest_length = ft_strlen(dest);
	if(destsize <= dest_length)
		return (destsize + ft_strlen(src));
	i = 0;
	while (src[i] && dest_length < (destsize - 1))
			dest[dest_length++] = src[i++];
	dest[dest_length] = '\0';
	return (dest_length);
	
}
