/*
** EPITECH PROJECT, 2021
** check obs
** File description:
** sokoban
*/

#include "../test.h"

my_bool check_obs_up(param *info)
{
    if (info->map[info->yp - 1][info->xp] == '#' || (info->yp - 1) == 0)
        return false;
    return true;
}

my_bool check_obs_down(param *info)
{
    if (info->map[info->yp + 1][info->xp] == '#'
        || (info->yp + 1) == (info->height - 1))
        return false;
    return true;
}

my_bool check_obs_left(param *info)
{
    if (info->map[info->yp][info->xp - 1] == '#' || ((info->xp - 1) <= 0))
        return false;
    return true;
}

my_bool check_obs_right(param *info)
{
    if (info->map[info->yp][info->xp + 1] == '#'
        || (info->xp + 1) >= info->width)
        return false;
    return true;
}

void reset_tab(param *info)
{
    create_tab(info);
    display_c(info);
}