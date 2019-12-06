/*
** EPITECH PROJECT, 2019
** mem_alloc_2d_int_arr
** File description:
** malloc 2d integer array
*/

#include "my.h"

int **mem_alloc_2d_int_arr(int nb_row, int nb_col)
{
    int **arr;

    arr = malloc(sizeof(int *) * (nb_row));
    for (int i = 0; i < nb_row; i++)
        arr[i] = malloc(sizeof(int) * (nb_col));
    return (arr);
}