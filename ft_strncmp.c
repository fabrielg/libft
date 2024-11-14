/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 01:26:53 by Fabrielg          #+#    #+#             */
/*   Updated: 2024/11/14 01:36:48 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((s1[i]) - (s2[i]));
}
/*
#include <string.h>
int	main(void)
{
	char	*s1 = "Cheval";
	char	*s2 = "Chevalier";
	printf("valeur = %d\n", strncmp(s1, s2, 10));
	printf("valeur = %d\n", ft_strncmp(s1, s2, 10));
	return (0);
}
*/