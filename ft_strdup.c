/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:02:00 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 14:55:16 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		len;

	len = ft_strlen(s);
	newstr = ft_calloc(len + 1, sizeof(char));
	if (!newstr)
		return (0);
	ft_strlcpy(newstr, s, len);
	return (newstr);
}
