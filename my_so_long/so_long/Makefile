NAME = so_long

SRC =	utils/mov_dir_test.c utils/mov_dir.c utils/movement.c utils/render.c so_long.c \
		utils/split.c utils/test_maps.c utils/utils_test_maps.c utils/utils.c

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(OBJ) so_long.h
	$(CC) $(FLAGS) -lmlx -framework OpenGl -framework AppKit $(SRC) -o $(NAME)

%.o: %.c
	$(CC) -c $(FLAGS) -Imlx $< -o $@

execute:
	./$(NAME) maps/map.ber

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all