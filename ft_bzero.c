/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:56:40 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/19 00:29:42 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*dest;
	size_t	i;

	dest = s;
	i = 0;
	while (i < n)
	{
		*dest++ = 0;
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
