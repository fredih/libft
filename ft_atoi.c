/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:03:50 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 10:25:26 by aantonio         ###   ########.fr       */
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
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	if (c == ' ')
	{
		return (1);
	}
	return (0);
}

int	getsign(const char *str)
{
	int	i;

	i = 0;
	while (!('0' <= str[i] && str[i] <= '9'))
	{
		i++;
	}
	if (str[i - 1] == '-')
		return (-1);
	else
		return (1);
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
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!('0' <= str[i] && str[i] <= '9'))
		return (0);
	while ('0' == str[i] && str[i + 1] == '0')
		i++;
	start = (char *)str + i;
	i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		i++;
	}
	end = (char *)str + i;
	pwr = pwr10((int)(end - start - 1));
	number = get_number(start, pwr);
	return (getsign(str) * number);
}
