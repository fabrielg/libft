/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:13:23 by gfrancoi          #+#    #+#             */
/*   Updated: 2025/02/24 21:27:24 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# define RESET "\e[0m"

# define BLACK "\e[0;30m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"
# define BLUE "\e[0;34m"
# define MAGENTA "\e[0;35m"
# define CYAN "\e[0;36m"
# define WHITE "\e[0;37m"
# define DEFAULT "\e[0;39m"

# define BLACK_B "\e[1;30m"
# define RED_B "\e[1;31m"
# define GREEN_B "\e[1;32m"
# define YELLOW_B "\e[1;33m"
# define BLUE_B "\e[1;34m"
# define MAGENTA_B "\e[1;35m"
# define CYAN_B "\e[1;36m"
# define WHITE_B "\e[1;37m"
# define DEFAULT_B "\e[1;39m"

void	write_color(char *str, char *color);

#endif