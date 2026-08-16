/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:42:53 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/16 19:36:13 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	
}

int *copy_array(int *array, int size)
{
	int	*copied;
	int	i;

	copied = malloc(size * sizeof(int));
	if (!copied)
		return (NULL);
	i = 0;
	while (i < size)
	{
		copied[i] = array[i];
		i++;
	}
	return (copied);
}

void normalize(int *array, int size)
{
	int *copied;
	t_stack temp;

	copied = copy_array(array, size);
	temp.numbers = copied;
	temp.size = size;
	selection_sort(&temp, size);
}

void selection_sort_array(int *array, int size);