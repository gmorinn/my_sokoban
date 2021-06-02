/*
** EPITECH PROJECT, 2021
** move x
** File description:
** sokoban
*/

#include "../test.h"

void move_x_up(param *info)
{
    info->map[info->yp][info->xp] = ' ';
    info->yp--;
    info->map[info->yp][info->xp] = 'P';
    info->map[info->yp - 1][info->xp] = 'X';
}

void move_x_down(param *info)
{
    info->map[info->yp][info->xp] = ' ';
    info->yp++;
    info->map[info->yp][info->xp] = 'P';
    info->map[info->yp + 1][info->xp] = 'X';
}

void move_x_left(param *info)
{
    info->map[info->yp][info->xp] = ' ';
    info->xp--;
    info->map[info->yp][info->xp] = 'P';
    info->map[info->yp][info->xp - 1] = 'X';
}

void move_x_right(param *info)
{
    info->map[info->yp][info->xp] = ' ';
    info->xp++;
    info->map[info->yp][info->xp] = 'P';
    info->map[info->yp][info->xp + 1] = 'X';
}