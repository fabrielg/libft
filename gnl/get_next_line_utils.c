/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 01:55:08 by gfrancoi          #+#    #+#             */
/*   Updated: 2025/02/03 16:59:18 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	gnl_strjoin(char **s1, char *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*join;

	s1_len = ft_strlen_char(*s1, 0);
	s2_len = ft_strlen_char(s2, 0);
	join = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!join)
		return ((void) 0);
	i = 0;
	while (*s1 && (*s1)[i])
	{
		join[i] = (*s1)[i];
		i++;
	}
	while (s2[i - s1_len])
	{
		join[i] = s2[i - s1_len];
		i++;
	}
	join[i] = 0;
	free(*s1);
	*s1 = join;
}

void	gnl_strcut(char **to_cut, char **paste)
{
	size_t	len;
	size_t	to_cut_len;
	char	*temp;

	if (!(*to_cut))
		return ((void)0);
	temp = *to_cut;
	len = ft_strlen_char(temp, '\n');
	if (gnl_strrchr(temp, '\n') != NULL)
		len++;
	if (*paste)
	{
		free(*paste);
		*paste = 0;
	}
	*paste = gnl_substr(temp, 0, len);
	if (!paste)
		return ((void)0);
	to_cut_len = ft_strlen_char(temp, 0);
	*to_cut = gnl_substr(temp + len, 0, to_cut_len);
	free(temp);
}

char	*gnl_strdup(const char *s)
{
	size_t	i;
	size_t	length;
	char	*dup;

	length = ft_strlen_char(s, '\n');
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

char	*gnl_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen_char(s, 0);
	while (s[i] != (unsigned char)c)
	{
		if (i == 0 && s[i] != c)
			return (NULL);
		i--;
	}
	return ((char *) &s[i]);
}

char	*gnl_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;
	size_t	i;

	if (!s)
		return (0);
	sub_len = 0;
	while (start < ft_strlen_char(s, 0) && sub_len < len && s[start + sub_len])
		sub_len++;
	sub = ft_calloc(sub_len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
