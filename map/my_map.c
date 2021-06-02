/*
** EPITECH PROJECT, 2021
** my map
** File description:
** sokoban
*/

#include "../test.h"

int max_width(param *info)
{
    int max = 0;
    int width = 0;
    for (int i = 0; info->maptest[i] != '\0'; i++) {
        if (info->maptest[i] == '\n') {
            if (width > max)
                max = width;
            width = 0;
        }
        width++;
    }
    return max;
}

void calc_height_width(param *info)
{
    info->width = max_width(info);
    for (int i = 0; info->maptest[i] != '\0'; i++) {
            if (info->maptest[i] == '\n')
                info->height++;
    }
}

int file_error(char *file)
{
    int fd = open(file, O_RDONLY);
    if (fd == -1) {
        my_printf("File does not exist.\n");
        return (-1);
    }
    return (fd);
}

char *open_map(param *info)
{
    int fd = open(info->path, O_RDONLY);
    struct stat buff;
    if ((fd = file_error(info->path)) < 0)
        exit(EXIT_FAILURE);
    stat(info->path, &buff);
    info->size = buff.st_size;
    info->maptest = malloc(sizeof(char) * info->size + 1);
    read(fd, info->maptest, info->size);
    info->maptest[info->size] = '\0';
    calc_height_width(info);
    close(fd);
    return (info->maptest);
}

void fs_open_file(param *info)
{
    info->maptest = open_map(info);
    info->map =  my_split(info->maptest, '\n');
    check_map(info);
}