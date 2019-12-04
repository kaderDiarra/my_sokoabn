/*
** EPITECH PROJECT, 2019
** permission to move
** File description:
** permission to move
*/

#include "my.h"

int map_limit(data_t *data)
{
    if (data->button == KEY_UP &&
    data->map[data->coor.perso_y - 1][data->coor.perso_x] != '#')
        return (1);
    if (data->button == KEY_DOWN &&
    data->map[data->coor.perso_y + 1][data->coor.perso_x] != '#')
        return (1);
    if (data->button == KEY_RIGHT &&
    data->map[data->coor.perso_y][data->coor.perso_x + 1] != '#')
        return (1);
    if (data->button == KEY_LEFT &&
    data->map[data->coor.perso_y][data->coor.perso_x - 1] != '#')
        return (1);
    return (0);
}