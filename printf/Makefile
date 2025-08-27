
NAME = libftprintf.a

CC = cc 

FLAGS = -Wall -Werror -Wextra

AR = ar rcs

RM = rm -f

LIBFT_DIR = libft 

LIBFT_A = $(LIBFT_DIR)/libft.a

SRC = ft_printf.c ft_print.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(LIBFT_A) : 
	$(MAKE) -C $(LIBFT_DIR) all

$(NAME) : $(LIBFT_A) $(OBJ)
	@cp libft/libft.a templibft.a
	@$(AR) x templibft.a
	@$(AR) $(NAME) *.o $(OBJ)
	@$(RM) templibft.a *.o

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean : clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re : fclean all

.PHONY: all clean fclean re ar
