/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:29:13 by bsurilla          #+#    #+#             */
/*   Updated: 2026/04/29 17:03:32 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	return (0);
}
/* #include <stdio.h>
int	main (void)
{
	int	c = 127;

	printf("Number: %d, 1 = TRUE, 0 = FALSE: %d\n", c, ft_isprint(c));
} */