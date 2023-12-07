CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = push_swap.c \
	   operations.c \
	   operations2.c \
	   stack_operations.c \
	   stack_operations2.c \
	   validation.c \
	   validation2.c \
	   checks.c \
	   list_operation.c \
	   utilis.c \



OBJS = $(SRCS:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
