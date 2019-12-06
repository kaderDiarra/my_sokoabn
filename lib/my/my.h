/*
** EPITECH PROJECT, 2019
** header file
** File description:
** library
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <ncurses.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct coor_s
{
    int perso_x;
    int perso_y;
    int **hole;
} coor_t;

typedef struct data_s
{
    int button;
    char *buffer;
    char **map;
    char **map_cpy;
    int row;
    int col;
    int nb_perso;
    int nb_hole;
    int nb_box;
    coor_t coor;
} data_t;

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int print_help(int ac, char *av);
void init_var(data_t *data);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
void load_map(char const *file_path, data_t *data);
void init_var(data_t *data);
void game_instruction(data_t *data);
void event_gestion(data_t *data, char *av);
int get_coor(data_t *data);
void move_pos(data_t *data);
void move_perso(data_t *data);
int map_limit(data_t *data);
int meet_hole(data_t *data);
void move_box(data_t *data);
int error_management(data_t *data, char **arr, int i, int j);
void find_hole_coor(data_t *data);
int **mem_alloc_2d_int_arr(int nb_row, int nb_col);
void free_variable(data_t *data);
void free_2d_int_array(int **arr, int nb_row);
void free_2d_char_array(char **arr, int nb_row);
char **fill_arr(data_t *data);

#endif
