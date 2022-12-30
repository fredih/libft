/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:10:14 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 10:34:59 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*newstr;
	size_t		slen;

	slen = ft_strlen((char *)s + start);
	if (slen < len)
		len = slen;
	newstr = malloc(len + 1);
	ft_strlcpy(newstr, (char *)s + start, len + 1);
	return (newstr);

}

