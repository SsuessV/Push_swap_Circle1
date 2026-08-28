/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:21:21 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/28 01:36:45 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_init(t_stack *stack, int *numbers, int size, int capacity)
{
	int	i;

	stack->capacity = capacity;
	stack->size = size;
	stack->numbers = malloc(sizeof(t_numbers) * capacity);
	if (!stack->numbers)
		return (0);
	i = 0;
	while (i < size)
	{
		stack->numbers[i].value = numbers[i];
		stack->numbers[i].rank = 0;
		i++;
	}
	assign_ranks(stack);
	return (1);
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
