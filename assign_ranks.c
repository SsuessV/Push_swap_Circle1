/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_ranks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:09:38 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/19 20:36:50 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_ranks(t_stack *stack)
{
	int	i;
	int	j;
	int	ranking;

	if (!stack)
		return ;
	i = 0;
	while (i < stack->size)
	{
		j = 0;
		ranking = 0;
		while (j < stack->size)
		{
			if (stack->numbers[i].value > stack->numbers[j].value)
				ranking++;
			j++;
		}
		stack->numbers[i].rank = ranking;
		i++;
	}
}
