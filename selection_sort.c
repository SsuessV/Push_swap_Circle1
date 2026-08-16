/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:24:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/16 20:17:05 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size > 0)
	{
		smallest_to_top(stack_a);
		push(stack_a, stack_b);
	}
	while (stack_b->size > 0)
		push(stack_b, stack_a);
}

void	smallest_to_top(t_stack *stack_a)
{
	int	min_index;
	int	rotations;
	int	size;

	size = stack_a->size;
	min_index = find_the_smallest(stack_a->numbers, size);
	if (min_index <= size / 2)
	{
		rotations = min_index;
		while (rotations--)
			rotate(stack_a);
	}
	else
	{
		rotations = size - min_index;
		while (rotations--)
			reverse_rotate(stack_a);
	}
}

int find_the_smallest(t_numbers *numbers, int size)
{
	int	i;
	int	smallest;
	int	min_index;

	i = 1;
	smallest = numbers[0].rank;
	min_index = 0;
	while (i < size)
	{
		if (smallest > numbers[i].rank)
		{
			smallest = numbers[i].rank;
			min_index = i;
		}
		i++;
	}
	return (min_index);
}
