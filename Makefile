NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -MMD -MP

INCLUDES = -Iincludes -Ilibft -Ift_printf

LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a

SRCS =	assign_ranks.c \
		disorder.c \
		input_parsing.c \
		input_validation.c \
		main.c \
		ops_doubles.c \
		ops_singles.c \
		radix_sort.c \
		selection_sort.c \
		stack.c \
		chunk_sort.c \
		cs_move_to_b.c \
		cs_back_to_a.c \
		ops_commands_1.c \
		ops_commands_2.c \
		flags.c \
		strategy.c \
		benchmark.c \
		

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