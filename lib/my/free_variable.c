/*
** EPITECH PROJECT, 2019
** free_variable
** File description:
** free variable
*/

#include "my.h"

void free_variable(data_t *data)
{
    free_2d_char_array(data->map, data->row);
    free_2d_int_array(data->coor.hole, data->nb_hole);
    free(data->buffer);
}