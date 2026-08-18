/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_back_to_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:14 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/18 17:29:39 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	back_to_a(t_stack *stack_a, t_stack *stack_b)
{
	int current;
	
	if (!stack_a || !stack_b)
		return ;	
	while (stack_b->size > 0)
	{
		current = largest_rank (stack_b);
		get_to_top(stack_b, current);
		push(stack_a, stack_b);
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