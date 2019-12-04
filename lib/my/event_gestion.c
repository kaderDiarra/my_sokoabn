/*
** EPITECH PROJECT, 2019
** event_gestion
** File description:
** event gestion
*/

#include "my.h"

void event_gestion(data_t *data)
{
    data->button = getch();
    if (data->button == KEY_F(32))
        exit (80);
}