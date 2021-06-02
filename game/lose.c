/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "../test.h"

void display_lose(int x, int check)
{
    if (x == check) {
        refresh();
        clear();
        endwin();
        exit(EXIT_FAILURE);
    }
}

int nb_x(param *info)
{
    int nb = 0;
    for (int y = 0; y < info->height; y++)
        for (int x = 0; x < info->width; x++){
            if (info->map[y][x] == 'X')
                nb++;
        }
    return nb;
}

void check_border(param *info, int x, int y)
{
    if (info->map[y][x] == 'X') {
        if (info->map[y - 1][x] == '#' || info->map[y + 1][x] == '#')
            if (info->map[y][x - 1] == '#' ||
                info->map[y][x + 1] == '#')
                info->check++;
    }
}

void check_lose(param *info)
{
    int x = nb_x(info);
    info->check = 0;
    for (int y = 0; y < info->height; y++)
        for (int x = 0; x < info->width; x++)
            if (info->map[y][x] == 'X')
                check_border(info, x, y);
    display_lose(x, info->check);
}