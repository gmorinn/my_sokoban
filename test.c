/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "test.h"

void create_tab(param *info)
{
    free_memory(info);
    info->map = my_split(info->maptest, '\n');
}

void sokoban(char *filepath, param *info)
{
    info->height = 0;
    info->width = 0;
    info->maptest = NULL;
    info->size = 0;
    info->xp = 0;
    info->yp = 0;
    info->is_o = 0;
    info->is_x = 0;
    info->path = filepath;
    fs_open_file(info);
}

void main_game(param *info)
{
    int ch = 0;
    initscr();
    cbreak();
    curs_set(true);
    keypad(stdscr, true);
    display_c(info);
    play(ch, info);
    endwin();
}

int main(int ac, char **av)
{
    param info;
    if (ac != 2) {
        my_printf(HELP);
        return 84;
    } else if (my_strcmp(av[1], "-h") == 0 && ac == 2)
        my_printf(HELP);
    else if (ac == 2) {
        sokoban(av[1], &info);
        main_game(&info);
        free_memory(&info);
    }
    return 0;
}
