/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:03:50 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/29 17:39:18 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

static int	pwr10(int exponent)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (i < exponent)
	{
		result *= 10;
		i++;
	}
	return (result);
}

static int	get_number(char *start, int pwr)
{	
	int	i;
	int	number;

	number = 0;
	i = 0;
	while (pwr != 0)
	{
		number += (*(start + i) - '0') * pwr;
		pwr /= 10;
		i++;
	}
	return (number);
}

static int	ft_isspace(char c)
{
	if (c == '\f' && c == '\n' || c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	if (c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	char	*start;
	char	*end;
	int		number;
	int		pwr;

	i = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	start = str + i;
	i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		i++;
	}
	end = str + i;
	pwr = pwr10((int)(end - start - 1));
	number = get_number(start, pwr);
	return (count_signs(str, start) * number);
}