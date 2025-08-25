
NAME = libftprintf.a

CC = cc 

FLAGS = -Wall -Werror -Wextra

AR = ar arc

RM = rm -f

LIBFT_DIR = libft 

LIBFT_A = $(LIBFT_DIR)/libft.a

SRC =

OBJ = $(SRC:.c=.o)

INCS = -I. -I$(LIBFT_DIR)

all : $(LIBFT_A) $(NAME)

$(LIBFT_A) : 
	$(MAKE) -c
$(NAME) : $(OBJ)
	