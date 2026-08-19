/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_medium_cs_back_to_a.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:14 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 23:40:28 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	back_to_a(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	int current;
	
	if (!stack_a || !stack_b)
		return ;	
	while (stack_b->size > 0)
	{
		current = largest_rank (stack_b);
		get_to_top(stack_b, current, 'b', info);
		pa(stack_a, stack_b, info);
	}
}

int	largest_rank(t_stack *stack)
{
	int	i;
	int	largest;
	
	if (!stack || stack->size == 0)
		return (-1);
	i = 0;
	largest = -1;
	while (i < stack->size)
	{
		if (stack->numbers[i].rank == (stack->size - 1))
			largest = i;
		i++;
	}
	return (largest);
}