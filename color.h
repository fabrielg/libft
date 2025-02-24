/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancoi <gfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:13:23 by gfrancoi          #+#    #+#             */
/*   Updated: 2025/02/24 21:17:54 by gfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# define RESET 0

# define BLACK 30
# define RED 31
# define GREEN 32
# define YELLOW 33
# define BLUE 34
# define MAGENTA 35
# define CYAN 36
# define WHITE 37
# define DEFAULT 39

# define BLACK_B 40
# define RED_B 41
# define GREEN_B 42
# define YELLOW_B 43
# define BLUE_B 44
# define MAGENTA_B 45
# define CYAN_B 46
# define WHITE_B 47
# define DEFAULT_B 49

void	write_color(char *str, int color);

#endif