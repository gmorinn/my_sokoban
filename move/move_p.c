/*
** EPITECH PROJECT, 2021
** move p
** File description:
** sokoban
*/

#include "../test.h"

void move_p_up(param *info)
{
    if (info->is_o == 1) {
        info->is_o = 0;
        info->map[info->yp][info->xp] = 'O';
        info->yp--;
        info->map[info->yp][info->xp] = 'P';
    }
    else if (info->map[info->yp - 1][info->xp] == 'O'){
        info->is_o = 1;
        info->map[info->yp][info->xp] = ' ';
        info->yp--;
        info->map[info->yp][info->xp] = 'P';
    }
    else {
        info->map[info->yp][info->xp] = ' ';
        info->yp--;
        info->map[info->yp][info->xp] = 'P';
    }
    refresh();
}

void move_p_down(param *info)
{
    if (info->is_o == 1) {
        info->is_o = 0;
        info->map[info->yp][info->xp] = 'O';
        info->yp++;
        info->map[info->yp][info->xp] = 'P';
    }
    else if (info->map[info->yp + 1][info->xp] == 'O'){
        info->is_o = 1;
        info->map[info->yp][info->xp] = ' ';
        info->yp++;
        info->map[info->yp][info->xp] = 'P';
    }
    else {
        info->map[info->yp][info->xp] = ' ';
        info->yp++;
        info->map[info->yp][info->xp] = 'P';
    }
    refresh();
}

void move_p_left(param *info)
{
    if (info->is_o == 1) {
        info->is_o = 0;
        info->map[info->yp][info->xp] = 'O';
        info->xp--;
        info->map[info->yp][info->xp] = 'P';
    }
    else if (info->map[info->yp][info->xp - 1] == 'O'){
        info->is_o = 1;
        info->map[info->yp][info->xp] = ' ';
        info->xp--;
        info->map[info->yp][info->xp] = 'P';
    }
    else {
        info->map[info->yp][info->xp] = ' ';
        info->xp--;
        info->map[info->yp][info->xp] = 'P';
    }
    refresh();
}

void move_p_right(param *info)
{
    if (info->is_o == 1) {
        info->is_o = 0;
        info->map[info->yp][info->xp] = 'O';
        info->xp++;
        info->map[info->yp][info->xp] = 'P';
    }
    else if (info->map[info->yp][info->xp + 1] == 'O'){
        info->is_o = 1;
        info->map[info->yp][info->xp] = ' ';
        info->xp++;
        info->map[info->yp][info->xp] = 'P';
    }
    else {
        info->map[info->yp][info->xp] = ' ';
        info->xp++;
        info->map[info->yp][info->xp] = 'P';
    }
    refresh();
}