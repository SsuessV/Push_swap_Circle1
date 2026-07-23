/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:17:35 by bsurilla          #+#    #+#             */
/*   Updated: 2026/07/21 22:12:51 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*numbers;
	int size;
} t_stack;


/* Parsing */

/* Stack functions */
void *stack_init(t_stack *stack, int *numbers, int size);

/* Operations */

/* Sorting */

#endif