/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:17:35 by bsurilla          #+#    #+#             */
/*   Updated: 2026/07/21 21:20:15 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/* Parsing */
void	parse_input(int argc, char **argv, t_stack *stack);
int     count_size(char **numbers)
void	validate_convert_fill(int *arr, char **numbers, int size)
void    print_error(void);
int     is_valid_number(char *input);
int     is_inrange(long long n);
void	is_duplicate(int *arr, int size);
//atoll?

/* Stack functions */

/* Stack Operations */
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);

/* Sorting */

#endif