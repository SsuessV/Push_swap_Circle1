/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 20:20:58 by bsurilla          #+#    #+#             */
/*   Updated: 2026/07/26 20:25:10 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_len(int *arr)
{
	int	size;

	size = 0;
	while (arr[size])
		size++;
	return (size);
}

void	free_arr(int *arr)
{
	free(arr);
}
