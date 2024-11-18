/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:34:51 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/18 23:31:45 by Fabrielg         ###   ########.fr       */
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
/*
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]));
		printf("%d\n", ft_atoi(argv[1]));
	}
	return (0);
}
*/
