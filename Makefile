NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -MMD -MP

INCLUDES = -Iincludes -Ilibft/includes -Ift_printf/includes

LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a

SRCS =	\

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	$(CC) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	$(MAKE) -C libft

$(PRINTF):
	$(MAKE) -C ft_printf

clean:
	rm -f $(OBJS) $(DEPS)
	make -C libft clean
	make -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean
	make -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)