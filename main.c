/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:52:51 by bsurilla          #+#    #+#             */
/*   Updated: 2026/07/24 17:01:01 by bsurilla         ###   ########.fr       */
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
    int capacity = 4;
    
    // number = parserfuction_numbers;#
    // size = function_of_size;
    // capacity = function_of_size; 
    stack_init(&a, numbers, size, capacity);
    stack_init(&b, NULL, 0, capacity);
    
//   ---------- tests to see if the above works ------------ //
    
int i = 0;
    while (i < a.size)
    {
        printf("%d ", a.numbers[i]);
        i++;
    }
    printf("\n");
    printf("%d\n", a.size);
    // b.numbers[0] = 999;
    // b.numbers[1] = 0;
    // b.numbers[2] = 2;
    // b.numbers[3] = 6;
    
    // printf("%d\n",b.numbers[2]);
    printf("%d\n",b.size);
}