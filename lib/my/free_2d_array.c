/*
** EPITECH PROJECT, 2019
** free_2d_array
** File description:
** free 2d array
*/

#include "my.h"

void free_2d_int_array(int **arr, int nb_row)
{
    for (int i = 0; i < nb_row; i++)
        free(arr[i]);
    free(arr);
}

void free_2d_char_array(char **arr, int nb_row)
{
    for (int i = 0; i < nb_row; i++)
        free(arr[i]);
    free(arr);
}