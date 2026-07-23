/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:52:51 by bsurilla          #+#    #+#             */
/*   Updated: 2026/07/23 21:50:12 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "libft/ft_printf.h"
#include <stdio.h>

int main(void)
{
    t_stack a;
    t_stack b;
    int numbers[] = {8, 3, 4, 1};
    int size = 4;
    
    stack_init(&a, numbers, size);
    stack_init(&b, NULL, 0);
  
    int i = 0;
    while (i < a.size)
    {
        printf("%d ", a.numbers[i]);
        i++;
    }
    printf("\n");
    printf("%d\n", a.size);
    a.numbers[0] = 999;
    printf("%d\n",a.numbers[0]);
}