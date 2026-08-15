/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:09:38 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/15 19:50:24 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rank(t_stack *stack)
{
    int i;
    int j;
    int ranking;
    
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
