/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:29:59 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/13 19:49:12 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t	ft_strlen(const char *s);

size_t  ft_strlcat (char *dst, const char *src, size_t siz)
{
    size_t  i;
    size_t  dst_len;

    dst_len = ft_strlen(dst);
    if (siz <= dst_len)
        return (siz + ft_strlen(src));
    i = 0;
    while (i < siz - 1 && src[i])
    {
        dst[i + dst_len] = src[i];
        i++;
    }
    dst[i + dst_len] = 0;
    return (dst_len + ft_strlen(src + i));
}

unsigned int	ft_strlcat2(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	dest_length = ft_strlen(dest);
	i = 0;
	while (src[i] && dest_length + 1 < size)
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dest[dest_length] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}

#include <string.h>
int main(void)
{
    char    *src = "Gabriel";
    char    dst[50] = "Je suis ";
    //strlcat(dst, src, 7);
    ft_strlcat(dst, src, 9);
    ft_strlcat2(dst, src, 9);
    printf("%s .\n", dst);
    return (0);
}