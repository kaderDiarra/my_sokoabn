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
        my_putstr("USAGE\n");
        my_putstr("     ./my_sokoban map\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("     map file representing the warehouse map, containing ");
        my_putstr("'#' for walls,\n");
        my_putstr("         ");
        my_putstr("'P' for the player, 'X' for boxes and ");
        my_putstr("'O' for storage locations.\n");
        exit (0);
    }
}