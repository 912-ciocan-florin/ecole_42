/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 16:32:27 by fciocan           #+#    #+#             */
/*   Updated: 2018/01/20 16:32:36 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_length(char *file)
{
	int		i;
	int		fd;
	char	buff;

	i = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (read(fd, &buff, 1) != '\0')
	{
		if (buff != '.' && buff != '#' && buff != '\n')
			return (-1);
		i++;
	}
	close(fd);
	if (i > 545)
		return (-1);
	return (i);
}

int	ft_read(char *file)
{
	int		fd;
	int		i;
	char	buff;
	char	*tetrimino;

	i = 0;
	if (ft_length(file) < 0)
		return (-1);
	tetrimino = (char *)ft_memalloc(ft_length(file) + 1);
	if (tetrimino == NULL)
		return (-1);
	fd = open(file, O_RDONLY);
	while (read(fd, &buff, 1) != '\0')
	{
		if (!(buff == '.' || buff == '#' || buff == '\n'))
			return (-1);
		tetrimino[i++] = buff;
	}
	tetrimino[i] = '\0';
	close(fd);
	if (tetrimino[0] != '.' && tetrimino[0] != '#')
		return (-1);
	return (0);
}

int	ft_error(void)
{
	ft_putendl("error");
	exit(0);
}
