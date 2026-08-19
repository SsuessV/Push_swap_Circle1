/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:39:12 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 21:32:52 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	choose_strategy(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	if (info->strategy == 1)
		selection_sort(stack_a, stack_b, info);
	else if (info->strategy == 2)
		chunk_sort(stack_a, stack_b, info);
	else if (info->strategy == 3)
		radix_sort(stack_a, stack_b, info);
	else
		run_adaptive(stack_a, stack_b, info);
}
void	run_adaptive(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	info->disorder = calculate_disorder(stack_a);
	if (info->disorder < 0.2)
	{
		selection_sort(stack_a, stack_b, info);
	}
	else if (info->disorder < 0.5)
	{	
		chunk_sort(stack_a, stack_b, info);
	}
	else
	{
		radix_sort(stack_a, stack_b, info);
	}
}