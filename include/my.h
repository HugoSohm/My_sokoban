/*
** EPITECH PROJECT, 2017
** my_sokoban.c
** File description:
** headers
*/

#ifndef	MY_H_
#define MY_H_

#include <sys/stat.h>
#include <limits.h>
#include <curses.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <ncurses.h>

int my_putstr(char const *str);

void	disp_map(char **tab, int size);
void	core(char **tab, int size, int P[6], char *path);
int	*find_P(char **tab, int col, int size, int p[6]);
int	*find_O(char **tab, int col, int size, int p[6]);
void	tab_create(int size, int col, char *path);
void	my_disphelp(void);
void	check_size(char *path);
void	move_rigth_2(char **tab, int input, int P[6]);
void	move_left_2(char **tab, int input, int P[6]);
void	move_up_2(char **tab, int input, int P[6]);
void	move_down_2(char **tab, int input, int P[6]);
void	check_O(char **tab, int input, int P[6]);
void	move_rigth(char **tab, int input, int P[6], int size);
void	move_left(char **tab, int input, int P[6], int size);
void	move_up(char **tab, int input, int P[6], int size);
void	move_down(char **tab, int input, int P[6], int size);
int	sizee(char *path);
int	size_col(char *path);
int	intitia(char *path);

#endif
