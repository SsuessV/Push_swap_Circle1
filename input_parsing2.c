/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:31:00 by bsurilla          #+#    #+#             */
/*   Updated: 2026/08/27 17:55:07 by suyoun           ###   ########.fr       */
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
