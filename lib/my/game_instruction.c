/*
** EPITECH PROJECT, 2019
** game_instruction
** File description:
** game instructions
*/

#include "my.h"

void verif_hole(data_t *data)
{
    for (int i = 0; i < data->nb_hole; i++){
        if (data->map[data->coor.hole[i][0]][data->coor.hole[i][1]] == ' ')
            data->map[data->coor.hole[i][0]][data->coor.hole[i][1]] = 'O';
    }
}

void verif_win(data_t *data)
{
    int counter = 0;

    for (int i = 0; i < data->nb_hole; i++){
        if (data->map[data->coor.hole[i][0]][data->coor.hole[i][1]] == 'X')
            counter++;
    }
    if (counter == data->nb_hole){
        for (int i = 0; i < data->row; i++)
            printw("%s", data->map[i]);
        endwin();
        exit (0);
    }
}

void display_map(data_t *data)
{
    clear();
    verif_hole(data);
    for (int i = 0; i < data->row; i++)
        printw("%s", data->map[i]);
    verif_win(data);
}

void game_instruction(data_t *data)
{
    get_coor(data);
    move_pos(data);
    getmaxyx(stdscr, data->coor.window_x, data->coor.window_y);
    if (data->coor.window_x < data->row || data->coor.window_y < data->col){
        clear();
        mvprintw(data->coor.window_x / 2, ((data->coor.window_y -
        my_strlen(data->resize_msg))/ 2), data->resize_msg);
    } else
        display_map(data);
}