/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy_selection.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:39:12 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/25 08:24:34 by suyoun           ###   ########.fr       */
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
	if (info->disorder == 0)
		return ;
	if (stack_a->size <= 5)
	{
		small_sort(stack_a, stack_b, info);
		return ;
	}
	if (info->disorder < 0.2)
	{
		info->algorithm = 1;
		selection_sort(stack_a, stack_b, info);
	}
	else if (info->disorder < 0.5)
	{
		info->algorithm = 2;
		chunk_sort(stack_a, stack_b, info);
	}
	else
	{
		info->algorithm = 3;
		radix_sort(stack_a, stack_b, info);
	}
}
