/*
** EPITECH PROJECT, 2019
** error_management
** File description:
** error management
*/

#include "my.h"

int error_management(data_t *data, char **arr, int i, int j)
{
    if (arr[i][j] != '#' && arr[i][j] != ' ' && arr[i][j] != 'P'
    && arr[i][j] != 'X' && arr[i][j] != 'O' && arr[i][j] != '\n'
    && arr[i][j] != '\0'){
        endwin();
        exit (84);
    }
    if (arr[i][j] == 'P'){
        data->nb_perso += 1;
        if (data->nb_perso > 1){
            endwin();
            exit (84);
        }
    }
    if (arr[i][j] == 'X'){
        data->nb_box += 1;
    } else if (arr[i][j] == 'O')
        data->nb_hole += 1;
    return (0);
}