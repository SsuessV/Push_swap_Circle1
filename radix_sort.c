/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:42:53 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/04 10:45:32 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void radix_sort(int num)
{
	
}

int	*copy_array(t_stack *stack)
{
	int	*copied;
	int	i;

	copied = malloc(stack->size * sizeof(int));
	if (!copied)
		return (NULL);
	i = 0;
	while (i < stack->size)
	{
		copied[i] = stack->numbers[i];
		i++;
	}
	return (copied);
}

void sort_copied(int *array, int size)
{
	
}