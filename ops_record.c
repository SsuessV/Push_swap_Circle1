/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_record.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:00:21 by suyoun            #+#    #+#             */
/*   Updated: 2026/08/28 02:05:05 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	record_op(t_info *info, int *counter, char *name)
{
	(*counter)++;
	info->total_ops++;
	ft_printf("%s\n", name);
}
