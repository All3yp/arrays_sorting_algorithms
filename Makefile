NAME	=	gabi.a

FILES	=	ft_simple_sort_array.c ft_recursive_sort_array.c ft_effetive_sort_array.c

SRC		=	$(wildcard $(FILES))
OBJ		=	$(SRC:.c=.o)
CC		=	clang
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo "Compilation done"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "Clean done"

fclean: clean
	@$(RM) $(NAME)
	@echo "Fclean done"

re: fclean all

.PHONY: all clean fclean re
