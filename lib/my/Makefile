##
## EPITECH PROJECT, 2019
## do_op
## File description:
## do operation
##

SRC	=	init_var.c \
		load_map.c \
		mem_alloc_2d_array.c \
		game_instruction.c \
		my_strlen.c \
		print_help.c \
		event_gestion.c \
		get_coor.c \
		move_pos.c \
		move_perso.c \
		permission_to_move.c \
		move_box.c \
		error_management.c \
		mem_alloc_2d_int_arr.c \
		hole_management.c \
		free_variable.c \
		free_2d_array.c \
		my_putstr.c \
		my_putchar.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

BIN	=	../../my_sokoban

FILE = ../../sokoban.c

INCLUDE	=	my.h

MY_H	=	-I../../include

LIB	=	-L. -lmy

all:	$(NAME) COMPILE

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir ../../include
	cp $(INCLUDE) ../../include

COMPILE:
	gcc -o $(BIN) $(FILE) $(MY_H) $(LIB) -lncurses

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -rf ../../include
	rm -f $(BIN)

re:	fclean all