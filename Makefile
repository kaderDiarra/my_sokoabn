##
## EPITECH PROJECT, 2019
## do_op
## File description:
## do operation
##

all:	COMPILE

COMPILE:
	make -C ./lib/my

clean:
	make clean -C ./lib/my/

fclean:	clean
	make fclean -C ./lib/my/

re:	fclean all
