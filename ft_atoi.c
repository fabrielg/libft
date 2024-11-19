/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:34:51 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/19 11:38:05 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		result;
	size_t	length;

	i = 0;
	sign = 1;
	length = ft_strlen(nptr);
	while (i < length && ft_strchr(" \t\n\r\v\f", nptr[i]))
		i++;
	if (i < length && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (i < length)
	{
		if (!ft_isdigit(nptr[i]))
			return (sign * result);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}
