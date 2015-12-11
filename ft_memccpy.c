/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:04:34 by avacher           #+#    #+#             */
/*   Updated: 2015/12/11 11:44:11 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void			*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*save_ptr;
	char		*save_ptr_2;

	if (s1 && s2)
	{
		save_ptr = (char*)s1;
		save_ptr_2 = (char*)s2;
		while (n > 0)
		{
			*save_ptr = *save_ptr_2;
			save_ptr++;
			if (*save_ptr_2 == c)
				return (save_ptr);
			save_ptr_2++;
			n--;
		}
	}
	return (NULL);
}
