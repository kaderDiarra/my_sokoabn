/*
** EPITECH PROJECT, 2019
** move_perso
** File description:
** move perso
*/

#include "my.h"

void move_up(data_t *data)
{
    if (map_limit(data) == 1){
        if (data->map[data->coor.perso_y - 1][data->coor.perso_x] == 'X'){
            move_box(data);
        } else
            move_perso(data);
    }
}

void move_down(data_t *data)
{
    if (map_limit(data) == 1){
        if (data->map[data->coor.perso_y + 1][data->coor.perso_x] == 'X'){
            move_box(data);
        } else
            move_perso(data);
    }
}

void move_left(data_t *data)
{
    if (map_limit(data) == 1){
        if (data->map[data->coor.perso_y][data->coor.perso_x - 1] == 'X'){
            move_box(data);
        } else
            move_perso(data);
    }
}

void move_right(data_t *data)
{
    if (map_limit(data) == 1){
        if (data->map[data->coor.perso_y][data->coor.perso_x + 1] == 'X'){
            move_box(data);
        } else
            move_perso(data);
    }
}

void move_pos(data_t *data)
{
    switch (data->button){
        case KEY_UP:
            move_up(data);
            break;
        case KEY_DOWN:
            move_down(data);
            break;
        case KEY_LEFT:
            move_left(data);
            break;
        case KEY_RIGHT:
            move_right(data);
            break;
    }
}