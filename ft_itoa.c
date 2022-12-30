/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:37:02 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 14:36:59 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	get_int_size(int number)
{
	int	size;

	size = 0;
	if (number == 0)
	{
		return (1);
	}
	if (number < 0)
	{
		number = number * -1;
	}
	while (number > 0)
	{
		number = number / 10;
		size++;
	}
	return (size);
}



char	*ft_itoa(int n)
{
	int		i;
	int		size;
	int		remainder;
	char	*result;

	size = get_int_size(n);
	result = ft_calloc(size + 1 + (n < 0), sizeof(char));
	if (!result)
		return (0);
	if (n < 0)
	{
		result[0] = '-';
	}
	i = 0;
	while (i < size)
	{
		remainder = abs(n) % 10;
		result[size - 1 - i + (n < 0)] = remainder + '0';
		n = n / 10;
		i++;
	}
	return (result);
}

