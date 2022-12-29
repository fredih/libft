/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:24:05 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/28 20:25:22 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	bzero(void *s, int n)
{
	return (ft_memset(s, 0, n));
}