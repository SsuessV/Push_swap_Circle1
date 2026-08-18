/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:30:20 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/18 17:34:53 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	move_chunks_to_b (stack_a, stack_b);
	back_to_a(stack_a, stack_b);
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
