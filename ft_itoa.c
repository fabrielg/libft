/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:50:15 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/18 23:53:31 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_digit(long int n)
{
	int	result;

	if (n < 0)
		n *= -1;
	result = 1;
	while (n > 9)
	{
		n /= 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char		*result;
	long int	nbr;
	int			digits;

	nbr = n;
	digits = nb_digit(nbr);
	if (n < 0)
	{
		nbr *= -1;
		digits++;
	}
	result = ft_calloc((digits + 1), sizeof(char));
	if (!result)
		return (NULL);
	result[digits] = 0;
	while (digits--)
	{
		result[digits] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s = ft_itoa(-2147483648);
	if (s)
	{
		printf("%s\n", s);
		free(s);
	}
	else
		printf("NULL VALUE\n");
	return (0);
}
*/
