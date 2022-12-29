/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:30:15 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/28 20:55:57 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcpy(void *dest, void *src, unsigned int n)
{
	int		i;
	char	*chardest;
	char	*charsrc;

	chardest = (char *)dest;
	charsrc = (char *)src;
	if (!dest || n == 0)
		return ;
	i = 0;
	while (i < n)
	{
		*(chardest + i) = *(charsrc + i);
		i++;
	}
}
