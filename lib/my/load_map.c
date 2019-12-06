/*
** EPITECH PROJECT, 2019
** load_map
** File description:
** load game map
*/

#include "my.h"

static int map_in_buff(data_t *data, char const *file_path, int size)
{
    int fd = open(file_path, O_RDONLY);
    data->buffer = malloc(sizeof(char) * (size + 1));
    int bytes_read = 0;

    if (fd == -1 || data->buffer == NULL){
        endwin();
        exit (84);
    }
    data->buffer[size + 1] = '\0';
    bytes_read = read(fd, data->buffer, size);
    if (data->buffer[size - 1] == '\0'){
        close(fd);
        return (1);
    }
    map_in_buff(data, file_path, (size + 1));
}

static void nb_col_row(data_t *data)
{
    int tmp = 0;

    for (int i = 0; data->buffer[i] != '\0'; i++){
        if (data->buffer[i] == '\n'){
            data->row += 1;
            tmp += 1;
            if (tmp > data->col)
                data->col = tmp;
            tmp = 0;
        } else
            tmp += 1;
    }
    if (data->row < 3 || data->col < 6){
        endwin();
        exit (84);
    }
}

char **fill_arr(data_t *data)
{
    char **arr = mem_alloc_2d_array(data->row, data->col);
    int k = 0;

    if (arr == NULL){
        endwin();
        exit (84);
    }
    for (int i = 0; i < data->row; i++){
        for (int j = 0; j < data->col; j++){
            arr[i][j] = data->buffer[k];
            error_management(data, arr, i, j);
            if (arr[i][j] == '\n'){
                j = data->col -1;
            }
            k++;
        }
    }
    return (arr);
}

void load_map(char const *file_path, data_t *data)
{
    int test = 0;

    data->buffer = NULL;
    test = map_in_buff(data, file_path, 1);
    nb_col_row(data);
    data->map = fill_arr(data);
    if (data->nb_perso < 1){
        endwin();
        exit (84);
    }
    if (data->nb_hole > data->nb_box || data->nb_box == 0
    || data->nb_hole == 0){
        endwin();
        exit (84);
    }
    find_hole_coor(data);
}