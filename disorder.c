/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 15:51:14 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/25 08:45:33 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	calculate_disorder(t_stack *stack)
{
	int		inversions;
	int		pairs;
	double	disorder;

	if (!stack)
		return (0);
	pairs = (stack->size * (stack->size - 1)) / 2;
	if (pairs == 0)
		return (0);
	inversions = count_inversions(stack);
	disorder = (double)inversions / pairs;
	return (disorder);
}

int	count_inversions(t_stack *stack)
{
	int	i;
	int	j;
	int	inversions;

	i = 0;
	j = 1;
	inversions = 0;
	while (i < stack->size)
	{
		while (j < stack->size)
		{
			if (stack->numbers[i].rank > stack->numbers[j].rank)
				inversions++;
			j++;
		}
		i++;
		j = i + 1;
	}
	return (inversions);
}
