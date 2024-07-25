NAME = cns_str_cpy
CC = gcc
FlAGS = -Werror -Wextra -Wall
RM = del /Q

SOURCE = cns_strcpy.c \
	cns_strncpy.c \
	cns_strlcpy.c \
	main.c

OBJS = $(SOURCE:.c=.o)
DEPS = cns_str_cpy.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME).exe

re: fclean all

.PHONY: all clean fclean re