/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small_sort2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 08:02:14 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/25 08:43:25 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *stack_a, t_info *info)
{
	if (stack_a->size == 2
		&& stack_a->numbers[0].rank > stack_a->numbers[1].rank)
		sa(stack_a, info);
}

void	sort_four(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	smallest_to_top(stack_a, info);
	pb(stack_a, stack_b, info);
	sort_three(stack_a, info);
	pa(stack_a, stack_b, info);
}

void	sort_five(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	smallest_to_top(stack_a, info);
	pb(stack_a, stack_b, info);
	smallest_to_top(stack_a, info);
	pb(stack_a, stack_b, info);
	sort_three(stack_a, info);
	pa(stack_a, stack_b, info);
	pa(stack_a, stack_b, info);
}
