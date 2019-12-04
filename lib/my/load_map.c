/*
** EPITECH PROJECT, 2019
** load_map
** File description:
** load game map
*/

#include "my.h"
#include <stdio.h>

static char *map_in_buff(char const *file_path, int size)
{
    int fd = open(file_path, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (size + 1));
    int bytes_read = 0;

    if (fd == -1 || buffer == NULL)
        exit (84);
    buffer[size + 1] = '\0';
    bytes_read = read(fd, buffer, size);
    if (buffer[size - 1] == '\0')
        return (buffer);
    map_in_buff(file_path, (size + 1));
}

static void nb_col_row(char *buffer, data_t *data)
{
    int tmp = 0;

    for (int i = 0; buffer[i] != '\0'; i++){
        if (buffer[i] == '\n'){
            data->row += 1;
            tmp += 1;
            if (tmp > data->col)
                data->col = tmp;
            tmp = 0;
        } else
            tmp += 1;
    }
}

static char **fill_arr(char *buffer, data_t *data)
{
    char **arr = mem_alloc_2d_array(data->row, data->col);
    int k = 0;

    if (arr == NULL)
        exit (84);
    for (int i = 0; i < data->row; i++){
        for (int j = 0; j < data->col; j++){
            arr[i][j] = buffer[k];
            if (arr[i][j] == '\n'){
                j = data->col -1;
            }
            k++;
        }
    }
    return (arr);
}

void fill_blank(data_t *data)
{
    int tmp = 0;

    for (int i = 0; i < data->row; i++){
        for (int j = 0; j < data->col; j++){
            if (data->map[i][j] == '\n' && j < data->col){
                while (j < data->col){
                    data->map[i][j] = '.';
                    j++;
                }
            }
        }
    }
}

void load_map(char const *file_path, data_t *data)
{
    char *buffer;

    buffer = map_in_buff(file_path, 1);
    nb_col_row(buffer, data);
    data->map = fill_arr(buffer, data);
    //fill_blank(data);
    //printf("%s", data->map[0]);
    //for (int i = 0; i < data->row; i++){
    //    printf("%s", data->map[i]);
    //}
    free(buffer);
}