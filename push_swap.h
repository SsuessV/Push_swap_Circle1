/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:17:35 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 13:19:08 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef	struct s_numbers
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

typedef struct s_info //change however u want, but please communicate it to me
{
	int		strategy;
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
void		parse_input(int argc, char **argv, t_stack *stack, t_info *info);
int			count_size(char **numbers);
void		validate_convert_fill(int *arr, char **numbers, int size);
long long	ft_atoll(const char *nptr);
void		free_split(char **words);
int			is_valid_number(char *input);
int			is_inrange(long long n);
void		is_duplicate(int *arr, int size);
void		print_error(void);
int			starting_index(int argc, char **argv, t_info *info);
int			output_mode(char *argv, t_info *info);
int			valid_strategy(char *argv, t_info *info);
char		**get_substr(int argc, char **argv, int start);

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
void		sa(t_stack *stack_a);
void		sb(t_stack *stack_b);
void		ss(t_stack *stack_a, t_stack *stack_b);
void		pa(t_stack *stack_a, t_stack *stack_b);
void		pb(t_stack *stack_b, t_stack *stack_a);
void		ra(t_stack *stack_a);
void		rb(t_stack *stack_b);
void		rr(t_stack *stack_a, t_stack *stack_b);
void		ra(t_stack *stack_a);
void		rb(t_stack *stack_b);
void		rrr(t_stack *stack_a, t_stack *stack_b);
void		rra(t_stack *stack_a);
void		rrb(t_stack *stack_b);
/* disorder */
double		calculate_disorder(t_stack *stack);
int			count_inversions(t_stack *stack);

/* Sorting */
void		selection_sort(t_stack *stack_a, t_stack *stack_b);
void		smallest_to_top(t_stack *stack_a);
int			find_the_smallest(t_numbers *numbers, int size);
int			count_bits(int max_rank);
void		radix_sort(t_stack *stack_a, t_stack *stack_b);

/* chunk sort */
void		chunk_sort(t_stack *stack_a, t_stack *stack_b);
int			chunk_range(t_stack *stack);
int			ft_sqrt(int size);
void		move_chunks_to_b (t_stack *stack_a, t_stack *stack_b);
int			current_selection(t_stack *stack, int start, int end);
void		get_to_top(t_stack *stack, int selected_index, char c);
void		butterfly_push(t_stack *stack_a, t_stack *stack_b, int start, int end);
void		back_to_a(t_stack *stack_a, t_stack *stack_b);
int			largest_rank(t_stack *stack);

#endif
