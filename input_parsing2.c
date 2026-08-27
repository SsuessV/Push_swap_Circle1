/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:31:00 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/27 17:47:27 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_array(int size)
{
	int	*arr;

	arr = malloc(size * sizeof(int));
	if (!arr)
		print_error();
	return (arr); 
}