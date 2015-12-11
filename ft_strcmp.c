/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:05:45 by avacher           #+#    #+#             */
/*   Updated: 2015/12/08 21:06:02 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char		*s_one;
	const unsigned char		*s_two;

	s_one = (const unsigned char*)s1;
	s_two = (const unsigned char*)s2;
	while (*s_one == *s_two && *s_one != '\0')
	{
		s_one++;
		s_two++;
	}
	return (*s_one - *s_two);
}
