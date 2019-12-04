/*
** EPITECH PROJECT, 2019
** move_perso
** File description:
** move_perso
*/

#include "my.h"

void move_perso_up(data_t *data)
{
    if (data->map[data->coor.perso_y - 1][data->coor.perso_x] != '#'){
        data->map[data->coor.perso_y][data->coor.perso_x] = ' ';
        data->map[data->coor.perso_y - 1][data->coor.perso_x] = 'P';
    }
}

void move_perso_down(data_t *data)
{
    if (data->map[data->coor.perso_y + 1][data->coor.perso_x] != '#'){
        data->map[data->coor.perso_y][data->coor.perso_x] = ' ';
        data->map[data->coor.perso_y + 1][data->coor.perso_x] = 'P';
    }
}

void move_perso_left(data_t *data)
{
    if (data->map[data->coor.perso_y][data->coor.perso_x - 1] != '#'){
        data->map[data->coor.perso_y][data->coor.perso_x] = ' ';
        data->map[data->coor.perso_y][data->coor.perso_x - 1] = 'P';
    }
}

void move_perso_right(data_t *data)
{
    if (data->map[data->coor.perso_y][data->coor.perso_x + 1] != '#'){
        data->map[data->coor.perso_y][data->coor.perso_x] = ' ';
        data->map[data->coor.perso_y][data->coor.perso_x + 1] = 'P';
    }
}

void move_perso(data_t *data)
{
    if (data->button == KEY_UP)
        move_perso_up(data);
    if (data->button == KEY_DOWN)
        move_perso_down(data);
    if (data->button == KEY_LEFT)
        move_perso_left(data);
    if (data->button == KEY_RIGHT)
        move_perso_right(data);
}