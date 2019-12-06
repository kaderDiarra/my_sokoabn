/*
** EPITECH PROJECT, 2019
** mem_alloc_2d_array
** File description:
** allocate 2d array and return his address
*/

#include "my.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **arr = malloc(sizeof(char *) * nb_rows);

    for (int i = 0; i < nb_rows; i++)
        arr[i] = malloc(sizeof(char) * nb_cols);
    return (arr);
}