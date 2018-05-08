/*
** EPITECH PROJECT, 2017
** dispmap.c
** File description:
** Made by Hugo SOHM
*/

#include "my.h"

void	disp_map(char **tab, int size)
{
	int	i = 0;

	erase();
	while (i != size) {
		printw(tab[i]);
		i++;
	}
	refresh();
}

void	core(char **tab, int size, int P[6], char *path)
{
	int	i;

	initscr();
	curs_set(0);
	keypad(stdscr, TRUE);
	keypad(stdscr, TRUE);
	disp_map(tab, size);
	while (P[2] != P[3]) {
		check_size(path);
		i = getch();
		move_down(tab, i, P, size);
		move_up(tab, i, P, size);
		move_left(tab, i, P, size);
		move_rigth(tab, i, P, size);
		check_O(tab, i, P);
		if (i == ' ')
			intitia(path);
	}
	endwin();
	free(P);
	free(tab);
	exit(0);
}
