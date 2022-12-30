/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:02:00 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 10:06:08 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*strdup(const char *s)
{
	char	*newstr;
	int len;

	len = ft_strlen(s);
	newstr = malloc(len + 1);
	ft_strlcpy(newstr, s, len);
	return (newstr);
}
