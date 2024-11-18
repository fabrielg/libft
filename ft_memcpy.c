/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:28:56 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/19 00:42:54 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (n <= 0)
		return (dest);
	if (!dest && !src)
		return (0);
	while (n--)
		*((char *)dest + n) = *((char *)src + n);
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
    //memcpy(dest, src, length - sizeof(char));
    ft_memcpy(src + 1, src, 2);

    for( length=0; length<7; length++ ) {
        printf( "%c ", src[length] );
    }
    printf( "\n" );
    free(dest);
    return (0);
}
*/