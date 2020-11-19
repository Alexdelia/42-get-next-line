/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:45:40 by adelille          #+#    #+#             */
/*   Updated: 2020/11/19 12:58:29 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_next_line(int fd, char **line)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*store[OPEN_MAX];
	ssize_t		read_size;
	int			i;

	buffer = NULL;
	if (!line || fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0 ||
				read(fd, buffer, 0) == -1 || !(buffer = malloc(BUFFER_SIZE + 1)))
		return (-1);
