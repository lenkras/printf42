NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_FILES = ft_printf.c \
			print_digits.c \
			print_chr.c \

OBJECTS = ${SRC_FILES:.c=.o}

all: $(NAME)

$(NAME):$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o:%.c  
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re