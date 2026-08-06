/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:42:53 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/05 01:35:14 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void radix_sort(t_stack stack_a)
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

void normalize(int *array, int size)
{
	int *copid;

	copied = copy_array(original);
	selection_sort(copied, );
}