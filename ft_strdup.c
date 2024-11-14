/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:15:13 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/14 17:26:01 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	length;
	char	*dup;

	length = ft_strlen(s);
	dup = malloc(sizeof(char) * (length + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
/*
#include <string.h>
int	main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		char	*ref = "Je vais avoir 125 au projet (:";
		char	*dup = strdup(ref);
		char	*ft_dup = strdup(ref);
		printf("%s\n", dup);
		printf("%s\n", ft_dup);
		free(dup);
		free(ft_dup);
	}
	else
	{
		char	*dup = strdup(argv[1]);
		char	*ft_dup = strdup(argv[1]);
		printf("%s\n", dup);
		printf("%s\n", ft_dup);
		free(dup);
		free(ft_dup);
	}
	return (0);
}
*/
