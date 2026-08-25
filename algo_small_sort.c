/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:35:35 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/25 21:15:11 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	if (stack_a->size == 2)
		sort_two(stack_a, info);
	else if (stack_a->size == 3)
		sort_three(stack_a, info);
	else if (stack_a->size == 4)
		sort_four(stack_a, stack_b, info);
	else if (stack_a->size == 5)
		sort_five(stack_a, stack_b, info);
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
