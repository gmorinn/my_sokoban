/*
** EPITECH PROJECT, 2021
** mark and obs
** File description:
** sokoban
*/

#include "../test.h"

my_bool check_mark_and_obs_top(param *info)
{
    if (info->map[info->yp - 2][info->xp] == '#'
        || info->map[info->yp - 2][info->xp] == 'X'
        || (info->yp - 2) <= 0)
        return false;
    return true;
}

my_bool check_mark_and_obs_down(param *info)
{
    if (info->map[info->yp + 2][info->xp] == '#'
        || info->map[info->yp + 2][info->xp] == 'X'
        || (info->yp + 2) >= (info->height - 1))
        return false;
    return true;
}

my_bool check_mark_and_obs_right(param *info)
{
    if (info->map[info->yp][info->xp + 2] == '#'
        || info->map[info->yp][info->xp + 2] == 'X'
        || (info->xp + 2) >= (info->width - 1)) {
            return false;
    }
    return true;
}

my_bool check_mark_and_obs_left(param *info)
{
    if (info->map[info->yp][info->xp - 2] == '#'
        || info->map[info->yp][info->xp - 2] == 'X' || ((info->xp - 2) <= 0)) {
        return false;
    }
    return true;
}