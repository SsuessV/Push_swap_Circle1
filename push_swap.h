/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:17:35 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/03 20:02:15 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "libft/ft_printf.h"

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int	*numbers;
	int size;
	int	capacity;
} t_stack;

/* Parsing */
void		parse_input(int argc, char **argv, t_stack *stack);
int			count_size(char **numbers);
void		validate_convert_fill(int *arr, char **numbers, int size);
long long	ft_atoll(const char *nptr);
void		free_split(char **words);
int			is_valid_number(char *input);
int			is_inrange(long long n);
void		is_duplicate(int *arr, int size);
void		print_error(void);
void		free_arr(int *arr);
int			count_len(int *arr);

/* Stack functions */
void	stack_init(t_stack *stack, int *numbers, int size, int capacity);
void    stack_free(t_stack *stack);

/* Stack Operations */
void		sa(t_stack *stack_a);
void		sb(t_stack *stack_b);
void		ss(t_stack *stack_a, t_stack *stack_b);
void		pa(t_stack *stack_a, t_stack *stack_b);
void		pb(t_stack *stack_a, t_stack *stack_b);

/* Sorting */
void		selection_sort(t_stack *stack_a, t_stack *stack_b);
void		smallest_to_top(t_stack *stack_a);
int			find_the_smallest(int *arr, int size);

#endif