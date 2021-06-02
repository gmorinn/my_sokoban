/*
** EPITECH PROJECT, 2021
** checl mark
** File description:
** sokoban
*/

#include "../test.h"

my_bool check_mark_up(param *info)
{
    if (info->map[info->yp - 1][info->xp] == 'X')
        return false;
    return true;
}

my_bool check_mark_down(param *info)
{
    if (info->map[info->yp + 1][info->xp] == 'X')
        return false;
    return true;
}

my_bool check_mark_left(param *info)
{
    if (info->map[info->yp][info->xp - 1] == 'X')
        return false;
    return true;
}

my_bool check_mark_right(param *info)
{
    if (info->map[info->yp][info->xp + 1] == 'X')
        return false;
    return true;
}