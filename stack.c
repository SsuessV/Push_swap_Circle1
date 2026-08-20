/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:21:21 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/20 16:07:02 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack *stack, int *numbers, int size, int capacity)
{
	int	i;

	stack->capacity = capacity;
	stack->size = size;
	stack->numbers = malloc(sizeof(t_numbers) * capacity);
	if (!stack->numbers)
		return ;
	i = 0;
	while (i < size)
	{
		stack->numbers[i].value = numbers[i];
		stack->numbers[i].rank = 0;
		i++;
	}
	assign_ranks(stack);
}

void	stack_free(t_stack *stack)
{
	if (stack == NULL)
	{
		return ;
	}
	free(stack->numbers);
	stack->numbers = NULL;
}
