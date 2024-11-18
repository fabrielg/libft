/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 02:09:33 by Fabrielg          #+#    #+#             */
/*   Updated: 2024/11/19 00:53:12 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if ((!big || !little) && !len)
		return (0);
	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	i = 0;
	while (big[i] && (len - i >= little_len))
	{
		j = 0;
		while (little[j])
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (j == little_len)
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*
#include <string.h>
int	main(void)
{
	char	*s1 = "Je suis un chevalier sur mon cheval.";
	char	*s2 = "cheval";
	printf("%s\n", strstr(s1, s2));
	printf("%s\n", ft_strnstr(s1, s2, 17));
	return (0);
}
*/
