/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CottonKiwii <julia.wolfram@gmx.at>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:40 by jwolfram          #+#    #+#             */
/*   Updated: 2024/09/24 12:02:56 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 24
# endif

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

# define ERR 0
# define TRUE 1

void	free_buffer(char **buffer, int fd);
int		get_next_line(int fd, char **file);

#endif
