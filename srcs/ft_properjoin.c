/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_properjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 13:15:29 by avacher           #+#    #+#             */
/*   Updated: 2015/12/19 13:58:41 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_properjoin(char const *s1, char const *s2)
{
	size_t	cpt1;
	size_t	cpt2;
	char	*t;

	cpt2 = -1;
	cpt1 = -1;
	t = NULL;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	if (s1 != NULL && s2 != NULL)
		return (ft_strjoin(s1, s2));
	return (NULL);
}
