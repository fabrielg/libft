/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:59:20 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/22 00:20:38 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new_calloc;
	size_t	calloc_len;

	calloc_len = nmemb * size;
	if (calloc_len < nmemb || calloc_len < size)
		return (0);
	new_calloc = malloc(calloc_len);
	if (!new_calloc)
		return (0);
	ft_bzero(new_calloc, calloc_len);
	return (new_calloc);
}
