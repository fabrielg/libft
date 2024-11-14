/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 02:01:05 by Fabrielg          #+#    #+#             */
/*   Updated: 2024/11/14 02:07:41 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		i++;
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*
#include <string.h>
int	main(void)
{
	char	*s1 = "Cheval";
	char	*s2 = "Chevalier";
	printf("valeur = %d\n", memcmp(s1, s2, 10));
	printf("valeur = %d\n", ft_memcmp(s1, s2, 10));
	return (0);
}
*/
