/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** Made by Hugo SOHM
*/

#include "my.h"

int	*find_P(char **tab, int col, int size, int p[6])
{
	p[0] = 0;
	p[1] = 0;
	while (p[0] != size) {
		while (p[1] != col) {
			if (tab[p[0]][p[1]] == 'P') {
				return (0);
			}
			p[1] = p[1] + 1;
		}
		p[1] = 0;
		p[0] = p[0] + 1;
	}
}

int	*find_O(char **tab, int col, int size, int p[6])
{
	p[0] = 0;
	p[1] = 0;
	p[2] = 0;
	p[3] = 0;
	while (p[0] != size) {
		while (p[1] != col) {
			if (tab[p[0]][p[1]] == 'O')
				p[3] = p[3] + 1;
			p[1] = p[1] + 1;
		}
		p[1] = 0;
		p[0] = p[0] + 1;
	}
}

void	tab_create(int size, int col, char *path)
{
	int	fd = open(path, O_RDONLY);
	int	i = 0;
	char	*buffer = malloc(sizeof(char) * col);
	char	**tab = malloc(sizeof(char *) * size);
	int	*P = malloc(sizeof(int) * 5);

	while (i != size) {
		tab[i] = malloc(sizeof(char) * col);
		read(fd, buffer, col);
		tab[i] = buffer;
		i = i + 1;
		buffer = malloc(sizeof(char) * col);
	}
	free(buffer);
	find_O(tab, col, size, P);
	find_P(tab, col, size, P);
	close(fd);
	core(tab, size, P, path);
}

void	my_disphelp(void)
{
	my_putstr("USAGE\n");
	my_putstr("     ./my_sokoban map\n");
	my_putstr("DESCRIPTION\n");
	my_putstr("     map  file representing the warehouse map, ");
	my_putstr(" containing '#' for walls,\n          'P' for the player");
	my_putstr(", 'X' for boxes and 'O' for storage locations.\n");
}

int	main(int ac, char **av)
{
	if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == 'h') {
				my_disphelp();
				return (0);
		}
		intitia(av[1]);
		return (0);
	}
		else
		my_putstr("Invalid number of arguments\n");
	return (84);
}
