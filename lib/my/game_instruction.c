/*
** EPITECH PROJECT, 2019
** game_instruction
** File description:
** game instructions
*/

#include "my.h"

void display_map(data_t *data)
{
    clear();
    for (int k = 0; k < data->nb_hole; k++){
        if (data->map[data->coor.hole[k][0]][data->coor.hole[k][1]] == ' ')
            data->map[data->coor.hole[k][0]][data->coor.hole[k][1]] = 'O';
    }
    for (int i = 0; i < data->row; i++)
        printw("%s", data->map[i]);
}

void game_instruction(data_t *data)
{
    get_coor(data);
    move_pos(data);
    display_map(data);
}