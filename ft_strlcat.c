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

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
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

// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strlcat.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/12/29 08:32:19 by aantonio          #+#    #+#             */
// /*   Updated: 2022/12/29 08:32:19 by aantonio         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h" 
// #include <stddef.h>

// size_t	ft_strlcat(char *dest, const char *src, size_t dest_mem_size)
// {
// 	size_t			i;
// 	size_t	dest_length;
// 	size_t	src_length;

// 	dest_length = ft_strlen(dest);
// 	src_length = ft_strlen(src);
// 	if(dest_mem_size <= dest_length)
// 		return (dest_mem_size + ft_strlen(src));
// 	i = 0;
// 	while (src[i] && dest_length + i < (dest_mem_size - 1))
// 	{
// 		dest[dest_length + i] = src[i];
// 		i++;
// 	}
// 	dest[dest_length] = '\0';
// 	// return (dest_length);
// 	return (dest_length + src_length);
	
// }
