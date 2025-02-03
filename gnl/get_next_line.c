/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 01:54:41 by gfrancoi          #+#    #+#             */
/*   Updated: 2025/02/03 17:03:56 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	buffer_alloc(char **buffer)
{
	if (*buffer == NULL)
		*buffer = ft_calloc(1, sizeof(char));
	if (*buffer == NULL)
		return (0);
	return (1);
}

void	read_file(int fd, char **buffer)
{
	char	*content;
	int		nb_read;

	if (!buffer_alloc(buffer))
		return ((void)0);
	if (ft_strrchr(*buffer, '\n') != NULL)
		return ((void)0);
	content = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!content)
		return ;
	while (1)
	{
		nb_read = read(fd, content, BUFFER_SIZE);
		content[nb_read] = 0;
		if (nb_read <= 0)
		{
			if (ft_strlen_char(*buffer, 0) == 0)
				return (free(*buffer), *buffer = NULL, free(content));
			break ;
		}
		gnl_strjoin(buffer, content);
		if (nb_read < BUFFER_SIZE || gnl_strrchr(*buffer, '\n') != NULL)
			break ;
	}
	free(content);
}

char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	char		*line;

	if (read(fd, 0, 0) < 0)
	{
		if (fd < 0 || fd > 1024)
			return (NULL);
		if (buffer[fd])
			free(buffer[fd]);
		buffer[fd] = NULL;
		return (NULL);
	}
	read_file(fd, &buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = NULL;
	gnl_strcut(&buffer[fd], &line);
	if (!line)
		free(buffer[fd]);
	return (line);
}
