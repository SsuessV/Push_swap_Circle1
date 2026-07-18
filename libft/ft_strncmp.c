/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:20:36 by bsurilla          #+#    #+#             */
/*   Updated: 2026/04/30 19:49:32 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 1 && s1[i] != 0 && s1[i] == s2[i])
	{
		n--;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* #include <stdio.h>
int	main(void)
{
	char	s1[] = "";
	char	s2[] = "hello";
	unsigned int	n;

	n = 0;
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("the difference is: %d\n", ft_strncmp(s1,s2,n));
} */
