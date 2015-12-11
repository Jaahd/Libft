/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:03:23 by avacher           #+#    #+#             */
/*   Updated: 2015/12/11 11:01:26 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*save_ptr;

	i = 0;
	save_ptr = s;
	while (save_ptr && i < n)
	{
		*save_ptr = '\0';
		i++;
		save_ptr++;
	}
}
