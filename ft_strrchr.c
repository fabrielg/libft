/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 01:22:54 by Fabrielg          #+#    #+#             */
/*   Updated: 2024/11/14 01:26:09 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i > 0)
	{
		if (s[i] == c)
			return (s - i);
		i--;
	}
	return (0);
}