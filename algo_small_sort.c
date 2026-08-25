/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:35:35 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/25 08:43:11 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *stack_a, t_info *info)
{
	if (stack_a->size == 2
		&& stack_a->numbers[0].rank > stack_a->numbers[1].rank)
		sa(stack_a, info);
}

void	sort_three(t_stack *stack_a, t_info *info)
{
	int	first;
	int	second;
	int	third;

	first = stack_a->numbers[0].rank;
	second = stack_a->numbers[1].rank;
	third = stack_a->numbers[2].rank;
	if (info->disorder == 0)
		return ;
	if (first > second && first > third)
		first_biggest(stack_a, info, second, third);
	else if (second > first && second > third)
		second_biggest(stack_a, info, first, third);
	else if (third > first && third > second)
		third_biggest(stack_a, info, first, second);
}

void	first_biggest(t_stack *stack_a, t_info *info, int second, int third)
{
	if (second > third)
	{
		sa(stack_a, info);
		rra(stack_a, info);
	}
	else
		ra(stack_a, info);
}

void	second_biggest(t_stack *stack_a, t_info *info, int first, int third)
{
	if (first > third)
		sa(stack_a, info);
	else
	{
		sa(stack_a, info);
		ra(stack_a, info);
	}
}

void	third_biggest(t_stack *stack_a, t_info *info, int first, int second)
{
	if (first > second)
		sa(stack_a, info);
}
