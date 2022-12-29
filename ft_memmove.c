/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:56:34 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/29 08:21:46 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_memmove(void *dest, void *src, unsigned int n)
{
	int				i;
	char			*chardest;
	char			*charsrc;

	chardest = (char *)dest;
	charsrc = (char *)src;
	if (!dest || n == 0)
		return ;
	if ((unsigned long)dest < (unsigned long)src)
	{
		i = 0;
		while (i < n)
		{
			*(chardest + i) = charsrc[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			chardest[i] = charsrc[i];
			i--;
		}
	}
}
