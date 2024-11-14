/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:50:32 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/14 18:06:12 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		str_len;
	char		*sub;

	str_len = ft_strlen(s);
	if (str_len <= start)
		return (NULL);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while ((i + start) <= len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
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
