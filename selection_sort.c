/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:24:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/11 18:32:44 by bsurilla         ###   ########.fr       */
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

int	find_the_smallest(int *arr, int size)
{
	int	i;
	int	smallest;
	int	min_index;

	i = 1;
	smallest = arr[0];
	min_index = 0;
	while (i < size)
	{
		if (smallest > arr[i])
		{
			smallest = arr[i];
			min_index = i;
		}
		i++;
	}
	return (min_index);
}
