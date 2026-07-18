/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:46:19 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/29 20:07:41 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*copy;
	unsigned int	i;

	copy = malloc(ft_strlen(s) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		copy[i] = f(i, s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/* 
#include <stdio.h>
char	ft_lower (unsigned int i, char c)
{
	(void) i;
	c = ft_tolower(c);
	return (c);
}

int main (void)
{
char str[] = "DUDE CALM DOWN";
char *str2;

str2 = ft_strmapi(str, ft_lower);
printf("%s\n", str2);
}
 */
