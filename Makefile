NAME := libft.a 
CC 	   := gcc
CFLAGS := -Wall -Werror -Wextra
LIB_FILES = main.c\
				ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_strlen.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strnstr.c\
				ft_atoi.c\
				ft_putchar.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c

OBJ_FILES = $(LIB_FILES:%.c=%.o)

all:  $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

test:
	gcc main.c -g ft*.c && ./a.out

clean:
	rm -rf $(OBJ_FILES)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
