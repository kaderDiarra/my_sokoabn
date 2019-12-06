/*
** EPITECH PROJECT, 2019
** init_var
** File description:
** initialize variable
*/

#include "my.h"

void init_var(data_t *data)
{
    data->button = 0;
    data->map = NULL;
    data->row = 0;
    data->col = 0;
    data->coor.perso_x = 0;
    data->coor.perso_y = 0;
    data->nb_perso = 0;
    data->nb_hole = 0;
    data->nb_box = 0;
    data->coor.hole = NULL;
    data->coor.window_x = 0;
    data->coor.window_y = 0;
    data->resize_msg = "Resize window";
}