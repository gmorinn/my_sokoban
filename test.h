/*
** EPITECH PROJECT, 2021
** Mockup
** File description:
** Step 1 bootstrap
*/

#ifndef TEST_H_
#define TEST_H_

#include "./printf/bsprintf.h"
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>

typedef int my_bool;
#define true 1
#define false 0
#define BUFF_SIZE   6042
#define HELP    "USAGE \n\t./my_sokoban map\nDESCRIPTION\n\tmap file\
representing the warehouse map, containing ‘#’ for walls, \n\t‘P’ for\
the player, ‘X’ for boxes and ‘O’ for storage locations.\n"

typedef struct param_t
{
    char content_file;
    char *path;
    int width;
    int height;
    int size;
    char **map;
    char *maptest;
    int xp;
    int yp;
    int is_o;
    int is_x;
    int check;
}param;


void calc_height_width(param *info);
void malloc_dd(param *info);
void create_tab(param *info);
void fs_open_file(param *info);
void move_up(param *info);
void move_down(param *info);
void move_left(param *info);
void move_right(param *info);
void sokoban(char *filepath, param *info);
void play(int ch, param *info);
void display_c(param *info);
my_bool check_obs_up(param *info);
my_bool check_obs_down(param *info);
my_bool check_obs_left(param *info);
my_bool check_obs_right(param *info);
my_bool check_mark_up(param *info);
my_bool check_mark_down(param *info);
my_bool check_mark_left(param *info);
void free_memory(param *info);
my_bool check_mark_right(param *info);
my_bool check_mark_and_obs_top(param *info);
my_bool check_mark_and_obs_down(param *info);
my_bool check_mark_and_obs_right(param *info);
my_bool check_mark_and_obs_left(param *info);
void move_x_up(param *info);
void move_x_down(param *info);
void move_x_left(param *info);
void move_x_right(param *info);
void move_p_up(param *info);
void move_p_down(param *info);
void move_p_left(param *info);
void move_p_right(param *info);
void loop_up(param *info);
void loop_right(param *info);
void loop_left(param *info);
void loop_down(param *info);
int nb_x(param *info);
void lose(param *info);
my_bool search_o(param *info);
void check_condition(param *info, int y, int i);
void check_lose(param *info);
void reset_tab(param *info);
int split_word(char *str, char split);
int lenght_split(char *str, char split);
char **my_split(char *str, char split);
void check_map(param *info);

#endif