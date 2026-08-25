/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_simple_selection_sort.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:24:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/25 08:41:14 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	if (stack_a->size <= 5)
	{
		small_sort(stack_a, stack_b, info);
		return ;
	}
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

void	small_sort(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	if (stack_a->size == 2)
		sort_two(stack_a, info);
	else if (stack_a->size == 3)
		sort_three(stack_a, info);
	else if (stack_a->size == 4)
		sort_four(stack_a, stack_b, info);
	else if (stack_a->size == 5)
		sort_five(stack_a, stack_b, info);
}
