/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:35:35 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/20 21:10:22 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *stack_a, t_info *info)
{
	if (stack_a->size == 2)
		sa(stack_a, info);
}

void	sort_three(t_stack *stack_a, t_info *info)
{
	if (info->disorder == 0)
		return ;
	
	
}