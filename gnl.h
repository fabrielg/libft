/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 01:54:58 by gfrancoi          #+#    #+#             */
/*   Updated: 2025/02/23 15:45:18 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define GNL_FD_SIZE 1024

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
void	read_file(int fd, char **buffer);
int		buffer_alloc(char **buffer);

void	gnl_strjoin(char **s1, char *s2);
void	gnl_strcut(char **to_cut, char **paste);
char	*gnl_strdup(const char *s);
char	*gnl_strrchr(const char *s, int c);
char	*gnl_substr(char const *s, unsigned int start, size_t len);

#endif
