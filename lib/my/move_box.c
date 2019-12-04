/*
** EPITECH PROJECT, 2019
** move_box
** File description:
** move boxes
*/

#include "my.h"

void move_box_up(data_t *data)
{
    if (data->map[data->coor.perso_y - 1][data->coor.perso_x] == 'X'
    && data->map[data->coor.perso_y - 2][data->coor.perso_x] != '#'
    && data->map[data->coor.perso_y - 2][data->coor.perso_x] != 'X'){
        data->map[data->coor.perso_y][data->coor.perso_x] = ' ';
        data->map[data->coor.perso_y - 1][data->coor.perso_x] = 'P';
        data->map[data->coor.perso_y - 2][data->coor.perso_x] = 'X';
    }
}

void move_box_down(data_t *data)
{
    if (data->map[data->coor.perso_y + 1][data->coor.perso_x] == 'X'
    && data->map[data->coor.perso_y + 2][data->coor.perso_x] != '#'
    && data->map[data->coor.perso_y + 2][data->coor.perso_x] != 'X'){
        data->map[data->coor.perso_y][data->coor.perso_x] = ' ';
        data->map[data->coor.perso_y + 1][data->coor.perso_x] = 'P';
        data->map[data->coor.perso_y + 2][data->coor.perso_x] = 'X';
    }
}

void move_box_left(data_t *data)
{
    if (data->map[data->coor.perso_y][data->coor.perso_x - 1] == 'X'
    && data->map[data->coor.perso_y][data->coor.perso_x - 2] != '#'
    && data->map[data->coor.perso_y][data->coor.perso_x - 2] != 'X'){
        data->map[data->coor.perso_y][data->coor.perso_x] = ' ';
        data->map[data->coor.perso_y][data->coor.perso_x - 1] = 'P';
        data->map[data->coor.perso_y][data->coor.perso_x - 2] = 'X';
    }
}

void move_box_right(data_t *data)
{
    if (data->map[data->coor.perso_y][data->coor.perso_x + 1] == 'X'
    && data->map[data->coor.perso_y][data->coor.perso_x + 2] != '#'
    && data->map[data->coor.perso_y][data->coor.perso_x + 2] != 'X'){
        data->map[data->coor.perso_y][data->coor.perso_x] = ' ';
        data->map[data->coor.perso_y][data->coor.perso_x + 1] = 'P';
        data->map[data->coor.perso_y][data->coor.perso_x + 2] = 'X';
    }
}

void move_box(data_t *data)
{
    if (data->button == KEY_UP)
        move_box_up(data);
    if (data->button == KEY_DOWN)
        move_box_down(data);
    if (data->button == KEY_LEFT)
        move_box_left(data);
    if (data->button == KEY_RIGHT)
        move_box_right(data);
}