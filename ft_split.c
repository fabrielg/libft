/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:51:08 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/18 13:12:42 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

static size_t	count_words(const char *s, char c)
{
	size_t	words;
	int		is_word;

	words = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && !is_word)
		{
			words++;
			is_word = 1;
		}
		else if (*s == c)
			is_word = 0;
		s++;
	}
	return (words);
}

static char	*ft_strndup(const char *s, size_t start, size_t end)
{
	char	*dup;
	size_t	i;

	dup = malloc(sizeof(char) * (end - start + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (start < end)
	{
		dup[i] = s[start];
		i++;
		start++;
	}
	dup[i] = 0;
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	index[2];
	int		start;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	index[0] = 0;
	index[1] = 0;
	start = -1;
	while (index[0] <= ft_strlen(s))
	{
		if (s[index[0]] != c && start == -1)
			start = index[0];
		else if ((s[index[0]] == c || ft_strlen(s) == index[0]) && start != -1)
		{
			split[index[1]++] = ft_strndup(s, start, index[0]);
			start = -1;
		}
		index[0]++;
	}
	split[index[1]] = 0;
	return (split);
}
/*
#include <stdio.h>
int     main(int ac, char **av)
{
	if (ac == 3 && av[2][0])
	{
		char	**split = ft_split(av[1], av[2][0]);
		int		i = 0;
		while (split[i])
		{
			printf("%s\n", split[i++]);
		}
	}
	else
	{
		char	**split = ft_split(NULL, ' ');
		if (!split)
		{
			printf("VALEUR NULL");
			return (1);
		}
		int		i = 0;
		while (split[i])
		{
			printf("%s\n", split[i++]);
		}
	}
	return (0);
}
*/
