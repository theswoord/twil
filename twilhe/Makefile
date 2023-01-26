SRC = main.c mapcheker.c player_movement.c player_movementD.c map.c out_put.c utils.c
NAME = so_long
CC = gcc
CFLAGS= -Wall -Wextra -Werror 
msa7 = rm -rf
libs = ./printf/printf.a ./gnl/gnl.a ./libft/libft.a
# obj = ${SRC}

all: ${NAME}

$(NAME): $(OBJ)
	$(CC) $(SRC) $(libs) -lmlx -framework OpenGL -framework AppKit -o $(NAME)



clean : 
	${msa7} ${NAME}

re : clean all