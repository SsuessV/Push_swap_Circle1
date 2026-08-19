/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:42:53 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/19 21:12:36 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	int	bit;
	int	max_bit;
	int	rank;
	int	size;

	size = stack_a->size;
	max_bit = count_bits(size);
	bit = 0;
	while (bit < max_bit) //from the bit in 0 position to the max_bit positon
	{
		rank = 0;
		while (rank < size)
		{
			if ((stack_a->numbers[0].rank >> bit & 1) == 0)
				pb(stack_b, stack_a, info); //if the last bit is 0 push to b
			else
				ra(stack_a, info); //if its 1 ra (bc we pushed it to b)
			rank++;
		}
		while (stack_b->size > 0)
			pa(stack_a, stack_b, info);//push all back to a
		bit++;
	}
}

int	count_bits(int max_rank)
{
	int	count;

	count = 0;
	max_rank--;
	while (max_rank > 0)
	{
		max_rank >>= 1;
		count++;
	}
	return (count);
}
