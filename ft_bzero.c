/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:56:40 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/18 15:56:27 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] && i * sizeof(char) < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%s .\n", argv[1]);
		//bzero(argv[1] + 1, ft_strlen(argv[1]) * sizeof(char));
		ft_bzero(argv[1] + 1, ft_strlen(argv[1]) * sizeof(char));
		printf("%s .\n", argv[1]);
	}
	return (0);
}
*/
