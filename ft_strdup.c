/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:06:21 by avacher           #+#    #+#             */
/*   Updated: 2015/12/08 21:06:22 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char				*ft_strdup(const char *s1)
{
	size_t			i;
	char			*duplicate;
	size_t			str_len;

	i = 0;
	str_len = ft_strlen(s1);
	duplicate = (char*)malloc(str_len + 1);
	if (!duplicate)
		return (NULL);
	while (i < str_len)
	{
		duplicate[i] = s1[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
