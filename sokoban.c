/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban game
*/

#include "my.h"

int main(int ac, char **av)
{
    data_t data;

    print_help(ac, av[1]);
    initscr();
    init_var(&data);
    load_map(av[1], &data);
    //noecho();
    keypad(stdscr, TRUE);
    while (1){
        game_instruction(&data);
        event_gestion(&data);
        refresh();
    }
    endwin();
    //free_variable();
}