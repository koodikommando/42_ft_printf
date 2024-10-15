CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SOURCES = ft_printf.c \
			ft_printf_utils.c \
			ft_print_hex_utils.c \
			ft_printf_nbr_utils.c \
			ft_print_ptr_utils.c


OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)


fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re
