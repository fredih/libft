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

unsigned long	ft_strlcat(char *dest, char *src, unsigned int destsize)
{
	int				i;
	unsigned long	dest_length;

	dest_length = 0;
	while (dest[dest_length])
	{
		dest_length++;
	}
	i = 0;
	while (src[i] != 0)
	{
		if (dest_length < (destsize - 1))
		{
			dest[dest_length] = src[i];
		}
		i++;
		dest_length++;
	}
	dest[i - dest_length] = 0;
	return (dest_length);
}
