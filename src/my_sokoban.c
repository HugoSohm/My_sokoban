/*
** EPITECH PROJECT, 2017
** my_sokoban.c
** File description:
** Made by Hugo SOHM
*/

#include "my.h"

void	check_O(char **tab, int input, int P[6])
{
	if (tab[P[4]][P[5]] != 'O' && tab[P[4]][P[5]] != 'P'
	&& tab[P[4]][P[5]] != '#')
		tab[P[4]][P[5]] = 'O';
}

void	move_rigth(char **tab, int input, int P[6], int size)
{
	if (input == KEY_RIGHT) {
		{
			if (tab[P[0]][P[1] + 1] != '#') {
				if (tab[P[0]][P[1] + 1] == 'X')
					move_rigth_2(tab, input, P);
				else {
					if (tab[P[0]][P[1] + 1] == 'O') {
						P[4] = P[0];
						P[5] = P[1] + 1;
					}
					tab[P[0]][P[1]] = ' ';
					tab[P[0]][P[1] + 1] = 'P';
					P[1] = P[1] + 1;
				}
			}
		}
		check_O(tab, input, P);
		disp_map(tab, size);
	}
}

void	move_left(char **tab, int input, int P[6], int size)
{
	if (input == KEY_LEFT) {
		if (tab[P[0]][P[1] - 1] != '#') {
			if (tab[P[0]][P[1] - 1] == 'X')
				move_left_2(tab, input, P);
			else {
				if (tab[P[0]][P[1] - 1] == 'O') {
					P[4] = P[0];
					P[5] = P[1] - 1;
				}
				tab[P[0]][P[1]] = ' ';
				tab[P[0]][P[1] - 1] = 'P';
				P[1] = P[1] - 1;
			}
		}
		check_O(tab, input, P);
		disp_map(tab, size);
	}
}

void	move_up(char **tab, int input, int P[6], int size)
{
	if (input == KEY_UP) {
		if (tab[P[0] - 1][P[1]] != '#') {
			if (tab[P[0] - 1][P[1]] == 'X') {
				move_up_2(tab, input, P);
			}
			else {
				if (tab[P[0] - 1][P[1]] == 'O') {
					P[4] = P[0] - 1;
					P[5] = P[1];
				}
				tab[P[0]][P[1]] = ' ';
				tab[P[0] - 1][P[1]] = 'P';
				P[0] = P[0] - 1;
			}
		}
		check_O(tab, input, P);
		disp_map(tab, size);
	}
}

void	move_down(char **tab, int input, int P[6], int size)
{
	if (input == KEY_DOWN) {
		if (tab[P[0] + 1][P[1]] != '#') {
			if (tab[P[0] + 1][P[1]] == 'X') {
				move_down_2(tab, input, P);
			}
			else {
				if (tab[P[0] + 1][P[1]] == 'O') {
					P[4] = P[0] + 1;
					P[5] = P[1];
				}
				tab[P[0]][P[1]] = ' ';
				tab[P[0] + 1][P[1]] = 'P';
				P[0] = P[0] + 1;
			}
		}
		check_O(tab, input, P);
		disp_map(tab, size);
	}
}
