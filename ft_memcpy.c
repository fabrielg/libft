/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:28:56 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/18 15:57:33 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
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