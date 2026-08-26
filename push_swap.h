/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:17:35 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/25 19:59:15 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_numbers
{
	int	value;
	int	rank;
}	t_numbers;

typedef struct s_stack
{
	t_numbers	*numbers;
	int			size;
	int			capacity;
}	t_stack;

typedef struct s_info
{
	int		strategy;
	int		algorithm;
	int		bench;
	double	disorder;
	int		total_ops;
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
}	t_info;

/* Parsing */
int			parse_input(int argc, char **argv, t_stack *stack, t_info *info);
int			count_size(char **numbers);
int			validate_convert_fill(int *arr, char **numbers, int size);
long long	ft_atoll(const char *nptr);
void		free_split(char **words);
int			is_valid_number(char *input);
int			is_inrange(long long n);
int			is_duplicate(int *arr, int size);
void		print_error(void);
int			starting_index(int argc, char **argv, t_info *info);
int			output_mode(char *argv, t_info *info);
int			valid_strategy(char *argv, t_info *info);
char		**get_substr(int argc, char **argv, int start);
void		input_cleanup(int *arr, char **substr, int argc, int start);

/* Stack functions */
void		stack_init(t_stack *stack, int *numbers, int size, int capacity);
void		stack_free(t_stack *stack);
void		assign_ranks(t_stack *stack);

/* Stack Operations */
void		swap(t_stack *stack);
void		push(t_stack *stack_dst, t_stack *stack_src);
void		rotate(t_stack *stack);
void		reverse_rotate(t_stack *stack);

/* Operations commands */
void		info_init(t_info *info);
void		sa(t_stack *stack_a, t_info *info);
void		sb(t_stack *stack_b, t_info *info);
void		ss(t_stack *stack_a, t_stack *stack_b, t_info *info);
void		pa(t_stack *stack_a, t_stack *stack_b, t_info *info);
void		pb(t_stack *stack_b, t_stack *stack_a, t_info *info);
void		ra(t_stack *stack_a, t_info *info);
void		rb(t_stack *stack_b, t_info *info);
void		rr(t_stack *stack_a, t_stack *stack_b, t_info *info);
void		rrr(t_stack *stack_a, t_stack *stack_b, t_info *info);
void		rra(t_stack *stack_a, t_info *info);
void		rrb(t_stack *stack_b, t_info *info);
void		record_op(t_info *info, int *counter, char *name);

/* disorder and strategies*/
double		calculate_disorder(t_stack *stack);
int			count_inversions(t_stack *stack);
void		choose_strategy(t_stack *stack_a, t_stack *stack_b, t_info *info);
void		run_adaptive(t_stack *stack_a, t_stack *stack_b, t_info *info);

/* Sorting */
void		selection_sort(t_stack *stack_a, t_stack *stack_b, t_info *info);
void		smallest_to_top(t_stack *stack_a, t_info *info);
int			find_the_smallest(t_numbers *numbers, int size);
void		small_sort(t_stack *stack_a, t_stack *stack_b, t_info *info);
void		sort_two(t_stack *stack_a, t_info *info);
void		sort_three(t_stack *stack_a, t_info *info);
void		first_biggest(t_stack *stack_a, t_info *info,
				int second, int third);
void		second_biggest(t_stack *stack_a, t_info *info,
				int first, int third);
void		third_biggest(t_stack *stack_a, t_info *info,
				int first, int second);
void		sort_four(t_stack *stack_a, t_stack *stack_b, t_info *info);
void		sort_five(t_stack *stack_a, t_stack *stack_b, t_info *info);
int			count_bits(int max_rank);
void		radix_sort(t_stack *stack_a, t_stack *stack_b, t_info *info);
void		chunk_sort(t_stack *stack_a, t_stack *stack_b, t_info *info);
int			chunk_range(t_stack *stack);
int			ft_sqrt(int size);
void		move_chunks_to_b(t_stack *stack_a, t_stack *stack_b, t_info *info);
int			current_selection(t_stack *stack,
				int start, int end);
void		get_to_top(t_stack *stack, int selected_index,
				char c, t_info *info);
void		reverse_to_top(t_stack *stack, int index, char c, t_info *info);
void		bfly_push(t_stack *a, t_stack *b, int start, t_info *info);
void		back_to_a(t_stack *stack_a, t_stack *stack_b, t_info *info);
int			largest_rank(t_stack *stack);

/* Benchmark */
void		print_benchmark(t_info *info);
char		*strategy_to_text(t_info *info);
void		print_ops1(t_info *info);
void		print_ops2(t_info *info);
void		decimal_zero(int decimal);

#endif