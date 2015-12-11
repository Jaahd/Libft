/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:07:24 by avacher           #+#    #+#             */
/*   Updated: 2015/12/08 21:07:33 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char			*ft_strstr(const char *s1, const char *s2)
{
	const char	*save_ptr;
	const char	*save_ptr_2;

	save_ptr_2 = s2;
	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 != '\0')
	{
		save_ptr = s1;
		while (*save_ptr == *save_ptr_2)
		{
			save_ptr++;
			save_ptr_2++;
			if (*save_ptr_2 == '\0')
				return ((char*)s1);
		}
		save_ptr_2 = s2;
		s1++;
	}
	return (NULL);
}
