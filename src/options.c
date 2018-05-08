/*
** EPITECH PROJECT, 2017
** options.c
** File description:
** Made by Hugo SOHM
*/

#include "my.h"

void	man(void)
{
	int	fd = open("./src/man", O_RDONLY);
	char	*print = malloc(sizeof(char) * 3000);
	char	buffer[3000];

	read(fd, buffer, 3000);
	print = buffer;
	my_putstr(print);
}

int	sizee(char *path)
{
	int	i = 0;
	int	e = 0;
	int	fd = open(path, O_RDONLY);
	char	buffer;

	read(fd, &buffer, 1);
	while (read(fd, &buffer, 1) != 0) {
		while (buffer != '\n') {
			read(fd, &buffer, 1);
			i++;
		}
		e++;
		i = 0;
	}
	close(fd);
	return (e);
}

int	size_col(char *path)
{
	int	i = 0;
	int	fd = open(path, O_RDONLY);
	char	buffer;

	read(fd, &buffer, 1);
	while (buffer != '\n') {
		read(fd, &buffer, 1);
		i++;
	}
	i++;
	return (i);
}

int	intitia(char *path)
{
	int	fd;
	int	size = sizee(path);
	int	x;
	int	y;
	int	col = size_col(path);
	char	buffer[300];

	tab_create(size, col, path);
}
