/*
** EPITECH PROJECT, 2021
** sokoban
** File description:
** loop game
*/

#include "../test.h"

int stop(void)
{
    refresh();
    clear();
    endwin();
    exit(EXIT_SUCCESS);
}

void loop_up(param *info)
{
    move_up(info);
    display_c(info);
    if (search_o(info) == false && info->is_o != 1)
        stop();
    if (search_o(info) != false && info->is_o != 1)
        check_lose(info);
}

void loop_down(param *info)
{
    move_down(info);
    display_c(info);
    if (search_o(info) == false && info->is_o != 1)
        stop();
    if (search_o(info) != false && info->is_o != 1)
        check_lose(info);
}

void loop_left(param *info)
{
    move_left(info);
    display_c(info);
    if (search_o(info) == false && info->is_o != 1)
        stop();
    if (search_o(info) != false && info->is_o != 1)
        check_lose(info);
}

void loop_right(param *info)
{
    move_right(info);
    display_c(info);
    if (search_o(info) == false && info->is_o != 1)
        stop();
    if (search_o(info) != false && info->is_o != 1)
        check_lose(info);
}