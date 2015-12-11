/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:04:53 by avacher           #+#    #+#             */
/*   Updated: 2015/12/11 11:49:13 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*save_ptr;
	const unsigned char	*save_ptr_2;

	if (n == 0)
		return (0);
	save_ptr = s1;
	save_ptr_2 = s2;
	while (n--)
	{
		if (*save_ptr != *save_ptr_2)
			return (*save_ptr - *save_ptr_2);
		save_ptr++;
		save_ptr_2++;
	}
	return (0);
}
