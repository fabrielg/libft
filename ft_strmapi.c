/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:12:43 by gfrancoi          #+#    #+#             */
/*   Updated: 2024/11/18 15:59:19 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
char	add_x_char(unsigned int add, char c)
{
	while ((c + add) >= 126 && add > 0)
		add--;
	if ((c + add) >= 126)
		return (126);
	return (c + add);
}

int	main(void)
{
	char	*str = ft_strmapi("AAAAAAAAAAAAAAAAAAAAAAAAAA", add_x_char);
	if (str)
	{
		printf("%s\n", str);
		free(str);
	}
	return (0);
}
*/
