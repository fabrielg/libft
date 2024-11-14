/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 02:09:33 by Fabrielg          #+#    #+#             */
/*   Updated: 2024/11/14 16:33:09 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	big_len;
	size_t	little_len;

	i = 0;
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (len < little_len)
		return (0);
	while (i <= big_len - little_len && i <= (len - little_len))
	{
		j = 0;
		while (j < little_len)
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
