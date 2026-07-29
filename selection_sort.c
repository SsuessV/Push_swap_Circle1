/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:24:13 by suyoun            #+#    #+#             */
/*   Updated: 2026/07/29 21:58:22 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(int *arr, int size)
{
	int	i;
	int	smallest;
	int	min_index;

	min_index = i;
	smallest = arr[0];
	while (i < size)
	{
		if (smallest > arr[i])
			sa(arr);
		i++;
	}
}
