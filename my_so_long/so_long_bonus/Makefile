NAME = so_long

SRC =	utils_b/mov_dir_test.c utils_b/mov_dir.c utils_b/movement.c utils_b/render.c so_long.c \
		utils_b/split.c utils_b/test_maps.c utils_b/utils_test_maps.c utils_b/utils.c \
		utils_b/dir_test_en.c utils_b/utils_b.c utils_b/test_map_en_move.c utils_b/mov_en.c


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