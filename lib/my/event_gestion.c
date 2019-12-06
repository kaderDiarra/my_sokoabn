/*
** EPITECH PROJECT, 2019
** event_gestion
** File description:
** event gestion
*/

#include "my.h"

static void replay_game(data_t *data)
{
    int k = data->col;

    for (int i = 1; i < data->row; i++){
        for (int j = 0; j < data->col; j++){
            data->map[i][j] = data->buffer[k];
            if (data->map[i][j] == '\n'){
                j = data->col -1;
            }
            k++;
        }
    }
}

void event_gestion(data_t *data)
{
    data->button = getch();
    if (data->button == ' '){
        replay_game(data);
    }
}