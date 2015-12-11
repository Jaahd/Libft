/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 21:41:10 by avacher           #+#    #+#             */
/*   Updated: 2015/12/11 12:01:15 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *s1, const char *s2)
{
	char	*save_ptr;
	if (!s1 || !s2)
		return (NULL);
	save_ptr = s1;
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s2++;
		s1++;
	}
	*s1 = '\0';
	s1 = save_ptr;
	return (s1);
}
