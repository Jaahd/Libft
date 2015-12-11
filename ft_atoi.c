/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacher <avacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:03:13 by avacher           #+#    #+#             */
/*   Updated: 2015/12/09 17:39:04 by avacher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	cpt;
	int		result;
	int		sign;

	cpt = 0;
	result = 0;
	sign = 1;
	while (str && (str[cpt] == ' ' || str[cpt] == '\n' || str[cpt] == '\t'
			|| str[cpt] == '\r' || str[cpt] == '\v' || str[cpt] == '\f'))
		cpt++;
	if (str && str[cpt] == '-')
	{
		sign *= -1;
		cpt++;
	}
	else if (str && str[cpt] == '+')
		cpt++;
	while (str && ft_isdigit(str[cpt]))
	{
		result *= 10;
		result += str[cpt] - '0';
		cpt++;
	}
	return (sign * result);
}
