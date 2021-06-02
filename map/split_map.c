/*
** EPITECH PROJECT, 2021
** my map
** File description:
** sokoban
*/

#include "../test.h"

void check_map(param *info)
{
    int p = 0;
    int o = 0;
    int x = 0;
    for (int y = 0; y < info->height; y++){
        for (int i = 0; i < info->width; i++){
            (info->map[y][i] == 'P') ? p++ : p;
            (info->map[y][i] == 'X') ? x++ : x;
            (info->map[y][i] == 'O') ? o++ : o;
            check_condition(info, y, i);
        }
    }
    if (p != 1 || o != x) {
        my_printf("This file is not good.\n");
        exit(EXIT_FAILURE);
    }
}

int split_word(char *str, char split)
{
    int value = 1;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == split)
            value++;
    return (value);
}

int lenght_split(char *str, char split)
{
    int i = 0;
    int value = 0;
    while (str[i] != '\0' && str[i] == split)
        i++;
    for (; str[i] != '\0'; i++, value++)
        if (str[i] == split)
            return (value);
    return (value);
}

void free_memory(param *info)
{
    for (int i = 0; i < info->height; i++)
        free(info->map[i]);
    free(info->map);
}

char **my_split(char *str, char split)
{
    int j = 0;
    int k = 0;
    char **temp = malloc(sizeof(char *) * (split_word(str, split) + 1));
    for (int i = 0; str[i] != '\0'; i++) {
        temp[j] = malloc(sizeof(char) * (lenght_split(str + i, split) + 1));
        k = 0;
        for (; str[i] != split && str[i] != '\0'; k++, i++)
            temp[j][k] = str[i];
        temp[j][k] = '\0';
        j++;
        if (str[i] == '\0')
            break;
    }
    temp[j] = NULL;
    return (temp);
}