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
}