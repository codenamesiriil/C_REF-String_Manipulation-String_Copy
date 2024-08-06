NAME = cns_str_cpy
CC = gcc
FLAGS = -Werror -Wextra -Wall -I./inc
RM = del /Q

SOURCE = cns_strcpy.c \
         cns_strncpy.c \
         cns_strlcpy.c \
         main.c

OBJS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME).exe

re: fclean all

.PHONY: all clean fclean re
