/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:58:47 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/29 20:12:12 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	ft_upper(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int main(void)
{
    char str[] = "stop";

    ft_striteri(str, ft_upper);

    printf("%s\n", str);
}
*/
