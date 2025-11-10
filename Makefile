NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC =  push_swap.c \
       src/check_args.c \
       src/init_stack.c \
       src/operations_1.c \
       src/operations_2.c \
       src/operations_3.c \
       src/operations_4.c \
       src/sort_big.c \
       src/sort_small/sort_small.c \
       src/sort_small/utils.c \
       utils/free.c \
       utils/ft_atoi.c \
       utils/ft_split.c \
       utils/ft_isdigit.c \
       utils/ft_strlen.c \
       utils/ft_strncmp.c \
       utils/ft_strdup.c \
       utils/ft_calloc.c \
       utils/ft_putstr_fd.c \
       utils/ft_error.c

OBJ = $(SRC:.c=.o)
all = $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all