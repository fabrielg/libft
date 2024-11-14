/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:59:20 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/14 17:19:09 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*calloc(size_t nmemb, size_t size)
{
	void	*new_calloc;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	new_calloc = malloc(nmemb * size);
	if (!new_calloc)
		return (NULL);
	ft_bzero(new_calloc, nmemb);
	return (new_calloc);
}
