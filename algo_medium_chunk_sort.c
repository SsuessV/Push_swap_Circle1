/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_medium_chunk_sort.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:30:20 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 23:31:18 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_sort(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	if (!stack_a || !stack_b)
		return ;
	move_chunks_to_b (stack_a, stack_b, info);
	back_to_a(stack_a, stack_b, info);
}

int	chunk_range(t_stack *stack)
{
	int	chunk_amount;
	int	chunk_size;
	
	if(!stack || stack->size == 0)
		return(0);
	chunk_amount = ft_sqrt(stack->size);
	chunk_size = stack->size / chunk_amount;
	return (chunk_size);
}

int	ft_sqrt(int size)
{
	int	i;

	i = 1;
	if (size < 0)
		return (0);
	if (size == 0)
		return (0);
	while (i * i <= size)
	{
		if (i * i == size)
			return (i);
		i++;
	}
	return (i - 1);
}
