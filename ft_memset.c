/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:10:35 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/28 20:54:09 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	char	*charptr;
	int		i;

	charptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*(charptr + i) = (unsigned char)c;
		i++;
	}
	return (charptr);
}
