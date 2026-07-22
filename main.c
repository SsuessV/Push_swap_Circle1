/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:52:51 by bsurilla          #+#    #+#             */
/*   Updated: 2026/07/21 22:11:14 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "../libft/libft.h"

int main(int argc, char **argv)
{
    t_stack a;
    t_stack b;
    int numbers = {8, 3, 4, 1};
    int size = 4;
    
    stack_init(&a, &numbers, size);
    stack_init(&b, NULL, 0);
}