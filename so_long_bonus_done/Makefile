SRCBonus = main_bonus.c mapcheker_bonus.c player_movement_bonus.c draw_bonus.c out_put_bonus.c utils_bonus.c init_bonus.c monstermovement_bonus.c drawanimation_bonus.c theclock_bonus.c error_bonus.c
SRC = main.c mapcheker.c player_movement.c draw.c out_put.c utils.c
NAME = so_long
CC = gcc
CFLAGS= -Wall -Wextra -Werror 
RM = rm -rf
libraries = ./printf/libftprintf.a ./gnl/gnl.a ./libft/libft.a 
SUBDIRS = gnl printf libft
.SILENT:
all:	libs $(NAME) 

	@echo "\033[104mThe mandatory part is made\033[0m"
$(NAME): $(SRC)
	$(CC) $(SRC) $(CFLAGS) $(libraries) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

libs: $(SUBDIRS)
	@echo "\033[1;32mmaking the libs ...\033[0m"

	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) all;)
	@echo "\033[1;31mit's made \033[0m"
libsre: $(SUBDIRS)
	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) re;)
libsclean:	$(SUBDIRS)
	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) fclean;)
clean:	$(SUBDIRS)
	@echo "\033[1;32mcleaning the objects \033[0m"
	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) clean;)
bonus: $(SRCBonus)

	@echo "\033[1;32mWork is done !\033[0m"
	@echo "\033[104mare you ready to play the best game in the whole universe ?\033[0m \033[1;31mAnd avoid the fearsome KILLER , TIAMAT and The elementalist\033[0m ?"
	$(CC) $(SRCBonus) $(CFLAGS) $(libraries) -lmlx -framework OpenGL -framework AppKit -o $(NAME)


fclean : 
	$(RM) $(NAME)
	@echo "\033[1;32mremoving So_long file \033[0m"
re : fclean libsclean all
