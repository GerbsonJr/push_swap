/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:41:44 by gmateus-          #+#    #+#             */
/*   Updated: 2025/12/02 18:32:57 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	ssize_t		chars_read;

	if (fd < 0 || fd >= FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (1)
	{
		if (buffer[fd][0] == '\0')
		{
			chars_read = read(fd, buffer[fd], BUFFER_SIZE);
			if (chars_read < 0)
				return (free(line), NULL);
			if (chars_read == 0)
				return (line);
			buffer[fd][chars_read] = '\0';
		}
		line = gnl_strjoin(line, buffer[fd]);
		if (!line || gnl_strchr(buffer[fd], '\n'))
			break ;
		buffer[fd][0] = '\0';
	}
	update_buffer(buffer[fd]);
	return (line);
}

/* int	main(int argc, char **argv)
{
	int		fd1;
	int		fd2;
	char	*line1;
	char	*line2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc != 3)
	{
		printf("Usage: %s <file1> <file2>\n", argv[0]);
		return (1);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	if (fd1 < 0 || fd2 < 0)
	{
		printf("open failed");
		return (1);
	}
	printf("Reading from both files...\n");
	while (1)
	{
		line1 = get_next_line(fd1);
		line2 = get_next_line(fd2);
		if (!line1 && !line2)
			break ;
		if (line1)
		{
			printf("File 1, Line %d: %s", ++i, line1);
			free(line1);
		}
		if (line2)
		{
			printf("File 2, Line %d: %s\n", ++j, line2);
			free(line2);
		}
	}
	printf("Finished reading both files.\n");
	close(fd1);
	close(fd2);
	return (0);
} */
