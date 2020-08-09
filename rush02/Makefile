CFLAGS = -Wall -Wextra -Werror

NAME = rush-02
SRCDIR = sources
INCDIR = includes
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)


%.o: %.c
		gcc $(CFLAGS) -c $< -o $@ -I $(INCDIR)

$(NAME): $(OBJS)
		gcc $(CFLAGS) -o $@ $^

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all