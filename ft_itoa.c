/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:50:15 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/18 15:57:15 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_digit(long int n)
{
	int	result;
	int	i;

	if (n < 0)
		n *= -1;
	i = 0;
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
	int			i;

	nbr = n;
	digits = nb_digit(nbr);
	if (nbr < 0)
		digits++;
	result = malloc(sizeof(char) * (digits + 1));
	if (!result)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		result[0] = '-';
		i = 1;
		nbr *= -1;
	}
	while (digits > i)
	{
		result[digits - 1] = (nbr % 10) + '0';
		nbr /= 10;
		digits--;
	}
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
