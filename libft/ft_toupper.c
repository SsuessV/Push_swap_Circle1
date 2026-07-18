/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:45:58 by bsurilla          #+#    #+#             */
/*   Updated: 2026/04/29 17:12:55 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		c = c - 32;
	return (c);
}

/* #include <stdio.h>
int	main(void)
{
	int c = 'b';
	printf("str: %c\n", (char)ft_toupper(c));
} */