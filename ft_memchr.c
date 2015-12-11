/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:04:44 by avacher           #+#    #+#             */
/*   Updated: 2015/12/11 11:40:36 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*save_ptr;

	i = 0;
	if (s != NULL)
	{
		save_ptr = s;
		while (i < n)
		{
			if (ft_memcmp(save_ptr, &c, 1) == 0)
				return ((void*)save_ptr);
			i++;
			save_ptr++;
		}
	}
	return (NULL);
}
