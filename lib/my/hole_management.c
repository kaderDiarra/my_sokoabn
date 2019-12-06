/*
** EPITECH PROJECT, 2019
** hole_management
** File description:
** find holes coor and manage hole display
*/

#include "my.h"

void find_hole_coor(data_t *data)
{
    int k = 0;

    data->coor.hole = mem_alloc_2d_int_arr(data->nb_hole, 2);
    for (int i = 0; i < data->row; i++){
        for (int j = 0; j < data->col; j++){
            if (data->map[i][j] == 'O'){
                data->coor.hole[k][0] = i;
                data->coor.hole[k][1] = j;
                k++;
            }
        }
    }
}