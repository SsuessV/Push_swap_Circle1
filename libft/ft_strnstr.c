/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:26:23 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/03 20:15:09 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (little[i] == 0)
		return ((char *)big);
	while (big[i] != 0 && i < len)
	{
		l = 0;
		while ((i + l) < len && little[l] != 0 && big[i + l] == little[l])
			l++;
		if (little[l] == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Hi, Hello";
	char find[] = "He";
	size_t len = 9;


	printf("this is what you are looking for: %s\n", find);
	printf("your str: %s\n",str);
	printf("%s\n", ft_strnstr(str,find,len));
}
*/
