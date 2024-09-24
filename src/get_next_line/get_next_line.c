/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:48:53 by jwolfram          #+#    #+#             */
/*   Updated: 2024/09/24 12:00:29 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

void	free_buffer(char **buffer, int fd)
{
	char	*str;	

	if (fd < 0 || !buffer[fd])
		return ;
	str = *buffer;
	free(str);
}

int	get_next_line(int fd, char **line)
{
	static char	*buffer[1024];
	char		*tmp;
	int		read_bytes;

	if (fd < 0 || !BUFFER_SIZE || !line)
		return (free_buffer(&buffer[fd], fd), ERR);
	tmp = (char *)malloc(BUFFER_SIZE * sizeof(char));
	if (!tmp)
		return (free_buffer(&buffer[fd], fd), ERR);
	while (ft_strchr(tmp, '\n'))
	{
		read_bytes = read(fd, tmp, BUFFER_SIZE);
		if (read_bytes == -1)
			return (free_buffer(&buffer[fd], fd), ERR);
		buffer[fd] = ft_strjoin(buffer[fd], tmp);
	}
	printf("Buffer is %s\n", buffer[fd]);
	free(tmp);
	return (1);
}
