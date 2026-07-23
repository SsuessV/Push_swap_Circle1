/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:21:21 by bsurilla          #+#    #+#             */
/*   Updated: 2026/07/23 21:28:26 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    stack_init(t_stack *stack, int *numbers, int size)
{
    int i;

    stack->size = size;
    stack->numbers = malloc(sizeof(int) * size);
    if (!stack->numbers)
        return;
    i = 0;
    while (i < size)
    {
        stack->numbers[i] = numbers[i];
        i++;        
    }
}
void    stack_free(t_stack *stack)
{
    if (stack == NULL)
    {
        return;
    }
   	free(stack->numbers);
    stack->numbers = NULL;
}

