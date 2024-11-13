/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:51:13 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/13 19:13:14 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
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