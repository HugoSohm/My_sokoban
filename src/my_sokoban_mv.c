/*
** EPITECH PROJECT, 2017
** my_sokoban_mv.c
** File description:
** Made by Hugo SOHM
*/

#include "my.h"

void	check_size(char *path)
{
	int	y;
	int	x;
	int	size = sizee(path);
	int	col = size_col(path);

	getmaxyx(stdscr, y, x);
	while (y < size || x < col) {
		clear();
		mvprintw(y / 2, (x - 34) / 2, "Please increase your terminal size");
		getmaxyx(stdscr, y, x);
		refresh();
	}
}

void	move_rigth_2(char **tab, int input, int P[6])
{
	if (tab[P[0]][P[1] + 2] != 'X' && tab[P[0]][P[1] + 2] != '#') {
		if (tab[P[0]][P[1] + 2] == 'O')
			P[2] = P[2] + 1;
		tab[P[0]][P[1]] = ' ';
		tab[P[0]][P[1] + 1] = 'P';
		tab[P[0]][P[1] + 2] = 'X';
		P[1] = P[1] + 1;
	}
}

void	move_left_2(char **tab, int input, int P[6])
{
	if (tab[P[0]][P[1] - 2] != 'X' && tab[P[0]][P[1] - 2] != '#') {
		if (tab[P[0]][P[1] - 2] == 'O')
			P[2] = P[2] + 1;
		tab[P[0]][P[1]] = ' ';
		tab[P[0]][P[1] - 1] = 'P';
		tab[P[0]][P[1] - 2] = 'X';
		P[1] = P[1] - 1;
	}
}

void	move_up_2(char **tab, int input, int P[6])
{
	if (tab[P[0] - 2][P[1]] != 'X' && tab[P[0] - 2][P[1]] != '#') {
		if (tab[P[0] - 2][P[1]] == 'O')
			P[2] = P[2] + 1;
		tab[P[0]][P[1]] = ' ';
		tab[P[0] - 1][P[1]] = 'P';
		tab[P[0] - 2][P[1]] = 'X';
		P[0] = P[0] - 1;
	}
}

void	move_down_2(char **tab, int input, int P[6])
{
	if (tab[P[0] + 2][P[1]] != 'X' && tab[P[0] + 2][P[1]] != '#') {
		if (tab[P[0] + 2][P[1]] == 'O')
			P[2] = P[2] + 1;
		tab[P[0]][P[1]] = ' ';
		tab[P[0] + 1][P[1]] = 'P';
		tab[P[0] + 2][P[1]] = 'X';
		P[0] = P[0] + 1;
	}
}
