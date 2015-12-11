/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:07:17 by avacher           #+#    #+#             */
/*   Updated: 2015/12/11 12:18:35 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*save_ptr;

	if (!s)
		return (NULL);
	save_ptr = (char*)s;
	while (*save_ptr != '\0')
		save_ptr++;
	while ((save_ptr != s) && (*save_ptr != c))
		save_ptr--;
	if ((save_ptr == s) && (*s != c))
		return (NULL);
	return (save_ptr);
}
