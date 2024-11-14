/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fabrielg <Fabrielg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 02:09:33 by Fabrielg          #+#    #+#             */
/*   Updated: 2024/11/14 02:15:45 by Fabrielg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
}

#include <string.h>
int	main(void)
{
	char	*s1 = "Je suis un chevalier !";
	char	*s2 = "cheval";
	printf("%s\n", strstr(s1, s2));
	return (0);
}
