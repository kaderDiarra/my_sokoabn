/*
** EPITECH PROJECT, 2019
** get_coor
** File description:
** get coordinates
*/

#include "my.h"

int get_coor(data_t *data)
{
    for (int i = 0; i < data->row; i++){
        for (int j = 0; j < data->col; j++){
            if (data->map[i][j] == 'P'){
                data->coor.perso_x = j;
                data->coor.perso_y = i;
                return (0);
            }
        }
    }
    return (-1);
}