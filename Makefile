CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = push_swap.c \
	   operations.c \
	   operations2.c \
	   stack_operations.c \
	   validation.c \
	   validation2.c


OBJS = $(SRCS:.c=.o)
NAME = push_swap

LIBFT = Libft
LIB   = $(LIBFT)/libft.a

all: $(NAME)

$(LIB):
		make -C $(LIBFT)

$(NAME): $(LIB) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJS)
	make -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re
