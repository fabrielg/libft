/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:21:38 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/18 15:59:30 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim[i] = s1[start];
		start++;
		i++;
	}
	trim[i] = 0;
	return (trim);
}
/*
int	main(void)
{
	const char	*s1 = "  		  Je suis     un	test		  	  	";
	const char	*set = " \t";
	char	*trim = ft_strtrim(s1, set);
	printf("%s.\n", trim);
	free(trim);
	return (0);
}
*/
