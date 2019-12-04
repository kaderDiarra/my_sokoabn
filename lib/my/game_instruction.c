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
    for (int i = 0; i < data->row; i++)
        printw("%s", data->map[i]);
}

void game_instruction(data_t *data)
{
    get_coor(data);
    move_pos(data);
    display_map(data);
}