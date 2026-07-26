/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 12:16:52 by suyoun            #+#    #+#             */
/*   Updated: 2026/07/26 19:57:12 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	int temp;

	if (!stack_a || stack_a->size < 2)
        return ;
	temp = stack_a->numbers[0];
	stack_a->numbers[0] = stack_a->numbers[1];
	stack_a->numbers[1] = temp;
}

void	sb(t_stack *stack_b)
{
	int temp;

	if (!stack_b || stack_b->size < 2)
        return ;
	temp = stack_b->numbers[0];
	stack_b->numbers[0] = stack_b->numbers[1];
	stack_b->numbers[1] = temp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
    sa(stack_a);
	sb(stack_b);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int i;

	i = stack_b->size;
	stack_a->numbers[0] = stack_b->numbers[0];
	while(i > 0)
	{
		stack_b->numbers[i - 1] = stack_b->numbers[i];
		i--;
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
    
}

