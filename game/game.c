/*
** EPITECH PROJECT, 2021
** game
** File description:
** sokoban
*/

#include "../test.h"

my_bool search_o(param *info)
{
    for (int y = 0; y < info->height; y++){
        for (int x = 0; x < info->width; x++){
            if (info->map[y][x] == 'O')
                return true;
        }
    }
    return false;
}

void play2(int ch, param *info)
{
    switch (ch) {
        case KEY_RIGHT:
                loop_right(info);
            break;
            case 32:
                reset_tab(info);
            break;
        default:
        break;
    }
}

void play(int ch, param *info)
{
    while ((ch = getch()) != 'q')
        switch (ch) {
            case KEY_UP:
                loop_up(info);
            break;
            case KEY_DOWN:
                loop_down(info);
            break;
            case KEY_LEFT:
                loop_left(info);
            break;
            default:
                play2(ch, info);
            break;
        }
}

void search_p(param *info)
{
    for (int y = 0; y < info->height; y++)
        for (int x = 0; x < info->width; x++) {
            if (info->map[y][x] == 'P') {
                info->xp = x;
                info->yp = y;
            }
        }
    refresh();
}

void display_c(param *info)
{
    int y;
    search_p(info);
    clear();
    for (y = 0; info->map[y]; y++) {
        if (!(info->map[y + 1]))
            printw("%s", info->map[y]);
        else
            printw("%s\n", info->map[y]);
    }
    refresh();
}