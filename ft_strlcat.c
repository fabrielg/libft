/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:29:59 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/14 01:02:05 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	dest_length;

    dest_length = ft_strlen(dst);
	if (siz <= dest_length)
		return (siz + ft_strlen(src));
	i = 0;
	while (src[i] && (dest_length + i) < siz - 1)
	{
		dst[dest_length + i] = src[i];
		i++;
	}
	dst[dest_length + i] = 0;
	return ((dest_length + i) + ft_strlen(src + i));
}