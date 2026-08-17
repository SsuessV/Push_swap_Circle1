/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:42:53 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/17 15:56:46 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	bit;
	int	max_bit;
	int	i;
	int	size;

	assign_ranks(stack_a);
	size = stack_a->size;
	max_bit = count_bits(size);
	bit = 0;
	while (bit < max_bit)
	{
		i = 0;
		while (i < size)
		{
			if ((stack_a->numbers[0].rank >> bit & 1) == 0)
				push(stack_b, stack_a);
			else
				rotate(stack_a);
			i++;
		}
		while (stack_b->size > 0)
			push(stack_a, stack_b);
		bit++;
	}
}

int	count_bits(int size)
{
	int	count;

	count = 0;
	size--;
	while (size > 0)
	{
		size >>= 1;
		count++;
	}
	return (count);
}
