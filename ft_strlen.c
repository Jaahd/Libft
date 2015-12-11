/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:06:40 by avacher           #+#    #+#             */
/*   Updated: 2015/12/08 21:06:42 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t			ft_strlen(const char *s)
{
	size_t		count;

	count = 0;
	if (s)
		while (*s != '\0')
		{
			count++;
			s++;
		}
	return (count);
}
