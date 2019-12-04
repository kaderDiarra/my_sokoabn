/*
** EPITECH PROJECT, 2019
** print_help
** File description:
** show how to play 
*/

#include "my.h"

int print_help(int ac, char *av)
{
    if (ac == 2 && av[0] == '-' && av[1] == 'h'
    && my_strlen(av) == 2){
        printw("USAGE\n");
        printw("     ./my_sokoban map\n");
        printw("DESCRIPTION\n");
        printw("     ");
        printw("map file representing the warehouse map, ");
        printw("containing '#' for walls,\n");
        printw("         ");
        printw("'P' for the player, 'X' for boxes and 'O' for storage location.\n");
        exit (0);
    }
}