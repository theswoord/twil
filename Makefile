SRC = main.c mapcheker.c player_movement.c draw.c out_put.c utils.c init.c monstermovement.c
NAME = so_long
CC = gcc
CFLAGS= -Wall -Wextra -Werror 
RM = rm -rf
libraries = ./printf/libftprintf.a ./gnl/gnl.a ./libft/libft.a 
SUBDIRS = gnl printf libft
all:	libs $(NAME) 

$(NAME): $(SRC)
	$(CC) $(SRC) $(libraries) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

libs: $(SUBDIRS)
	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) all;)
libsre: $(SUBDIRS)
	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) re;)
libsclean:	$(SUBDIRS)
	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) fclean;)
clean:	$(SUBDIRS)
	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) clean;)



fclean : 
	$(RM) $(NAME)

re : fclean libsclean all
