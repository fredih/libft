/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 09:45:36 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 09:57:29 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	int		i;
	void	*ptr;

	ptr = malloc(nmemb * size);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
