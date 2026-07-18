/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:24:31 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/06 20:16:39 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		find;
	const unsigned char	*pstr;

	find = (unsigned char) c;
	pstr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (pstr[i] == find)
			return ((void *)&pstr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char str[] = "if one day you will go";
	int c;
	size_t n;

	n = 10;
	c = 'o';
	printf("this is what you are looking for: %c\n",c);
	printf("your str: %s\n",str);
	printf("ft_strchr: %s\n",(char*) ft_memchr(str,c,n));
	printf("strchr: %s\n", (char*) memchr(str,c,n));
}
*/
