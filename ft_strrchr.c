/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 01:22:54 by Fabrielg          #+#    #+#             */
/*   Updated: 2024/11/19 00:35:04 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (s[i] != (unsigned char)c)
	{
		if (i == 0 && s[i] != c)
			return ((char *) 0);
		i--;
	}
	return ((char *) &s[i]);
}
