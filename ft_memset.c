/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:05:18 by avacher           #+#    #+#             */
/*   Updated: 2015/12/08 21:05:22 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void			*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*save_ptr;

	i = 0;
	save_ptr = b;
	while ((i < len) && (b != NULL))
	{
		*save_ptr = c;
		i++;
		save_ptr++;
	}
	return (b);
}
