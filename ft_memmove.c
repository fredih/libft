/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:56:34 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/29 09:26:01 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_memmove(void *dest, void *src, unsigned int n)
{
	int				i;

	if (!dest || n == 0)
		return ;
	if ((unsigned long)dest < (unsigned long)src)
	{
		i = 0;
		while (i < n)
		{
			*((char *)dest + i) = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
}
