NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -MMD -MP

INCLUDES = -Iincludes -Ilibft -Ift_printf

LIBFT = libft/libft.a
PRINTF = libft/libftprintf.a

SRCS =	input_parsing.c \
		validation.c \
		ops_swap_push.c \
		selection_sort.c \

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
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)