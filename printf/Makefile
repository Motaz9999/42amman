
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

LIBFT_DIR = libft
LIBFT_A = $(LIBFT_DIR)/libft.a

SRC = ft_printf.c ft_print.c
OBJ = $(SRC:.c=.o)

TMP_DIR = tmp_libft

all: $(NAME)


$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR) all

$(NAME): $(OBJ) $(LIBFT_A) 
	$(AR) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
