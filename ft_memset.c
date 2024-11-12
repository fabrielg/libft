/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:05:38 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/12 18:05:39 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		((unsigned char *)s)[n] = c;
	}
	return (s);
}
/*
#include <stdlib.h>
#include <string.h>

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    char	str[] = "salut";
    size_t size = sizeof( char ) * 5;
    int length;

    for( length=0; length<5; length++) {
        printf( "%d ", str[ length ] );
    }
    printf( "\n" );

    ft_memset( str, 0, size );

    for( length=0; length<5; length++) {
        printf( "%d ", str[ length ] );
    }
    printf( "\n" );

	return 0;
}
*/
