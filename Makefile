CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = push_swap.c \
       operations.c \
       stack_operations.c \
       validation.c \

OBJS = $(SRCS:.c=.o)
NAME = push_swap

LIB = ./Ft_printf
LIBFT = $(LIB)/libft.a

all: $(NAME)

$(NAME): lib $(OBJ)
	cp $(LIBFT) $(NAME)

lib :
    make -C $(LIB)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I ./

clean:
    rm -f $(OBJS)
    make -C libft clean

fclean: clean
    rm -f $(NAME)
    rm -f $(LIBFT)
    make -C fclean Libft/

re: fclean all

.PHONY: all lib clean fclean re
