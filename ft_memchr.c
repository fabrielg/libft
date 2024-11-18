/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 01:46:25 by Fabrielg          #+#    #+#             */
/*   Updated: 2024/11/18 14:34:28 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return ((void *)0);
}
/*
#include <string.h>
int	main(void)
{
	char	*s = "Bonjour";
	printf("%d, %s\n", memchr(s, 'j', 7), memchr(s, 'j', 7));
	printf("%d, %s\n", ft_memchr(s, 'j', 7), ft_memchr(s, 'j', 7));
	return (0);
}
*/
