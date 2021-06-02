/*
** EPITECH PROJECT, 2021
** Move
** File description:
** sokoban
*/

#include "../test.h"

void move_up(param *info)
{
    if (check_mark_up(info) == true) {
        if (check_obs_up(info) == true)
            move_p_up(info);
    } else if (check_mark_and_obs_top(info) == true)
        move_x_up(info);
}

void move_down(param *info)
{
    if (check_mark_down(info) == true) {
        if (check_obs_down(info) == true)
            move_p_down(info);
    } else if (check_mark_and_obs_down(info) == true)
        move_x_down(info);
}

void move_left(param *info)
{
    if (check_mark_left(info) == true) {
        if (check_obs_left(info) == true)
            move_p_left(info);
    } else if (check_mark_and_obs_left(info) == true)
        move_x_left(info);
}

void move_right(param *info)
{
    if (check_mark_right(info) == true) {
        if (check_obs_right(info) == true)
            move_p_right(info);
    } else if (check_mark_and_obs_right(info) == true)
        move_x_right(info);
}

void check_condition(param *info, int y, int i)
{
    if (info->map[y][i] != 'X' && info->map[y][i] != 'P'
        && info->map[y][i] != 'O' && info->map[y][i] != '#'
        && info->map[y][i] != ' ' && info->map[y][i] != '\0'
        && info->map[y][i] != '\n') {
                my_printf("This file is not good.\n");
                exit(EXIT_FAILURE);
        }
}