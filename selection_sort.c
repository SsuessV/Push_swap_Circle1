/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:24:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/19 21:16:21 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	while (stack_a->size > 0)
	{
		smallest_to_top(stack_a, info);
		pb(stack_b, stack_a, info);
	}
	while (stack_b->size > 0)
		pa(stack_a, stack_b, info);
}

void	smallest_to_top(t_stack *stack_a, t_info *info)
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
			ra(stack_a, info);
	}
	else
	{
		rotations = size - min_index;
		while (rotations--)
			rra(stack_a, info);
	}
}

int	find_the_smallest(t_numbers *numbers, int size)
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
