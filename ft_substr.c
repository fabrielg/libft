/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:50:32 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/18 23:47:31 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dup;
	size_t	i;
	size_t	j;

	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			dup[j] = s[i];
			j++;
		}
		i++;
	}
	dup[j] = 0;
	return (dup);
}
/*
int	main(void)
{
	char	*s = "Salut 42";
	char	*sub = ft_substr(s, 6, 42);
	printf("%s\n", sub);
	free(sub);
	return (0);
}
*/
