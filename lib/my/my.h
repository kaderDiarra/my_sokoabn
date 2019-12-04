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
} coor_t;

typedef struct data_s
{
    int button;
    char **map;
    int row;
    int col;
    coor_t coor;
} data_t;

int my_strlen(char const *str);
int print_help(int ac, char *av);
void init_var(data_t *data);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
void load_map(char const *file_path, data_t *data);
void init_var(data_t *data);
void game_instruction(data_t *data);
void event_gestion(data_t *data);
int get_coor(data_t *data);
void move_pos(data_t *data);
void move_perso(data_t *data);
int map_limit(data_t *data);
int meet_hole(data_t *data);
void move_box(data_t *data);

#endif
