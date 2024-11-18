/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:51:13 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/19 00:49:57 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if (dest > src)
	{
		while (n >= 1)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdlib.h>
#include <string.h>

int main()
{
    char src[] = "Bonjour";
    char *dest = NULL;
    int length = sizeof(char) * 7;

    dest = malloc(length);
    //memmove(src + 2, src, 7);
    ft_memmove(src + 2, src, 7);

    for( length=0; length<7; length++ ) {
        printf( "%c ", src[length] );
    }
    printf( "\n" );
    free(dest);
    return (0);
}
*/