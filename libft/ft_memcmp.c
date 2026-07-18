/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 21:13:18 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/29 20:02:32 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n > 1 && ptr1[i] == ptr2[i])
	{
		i++;
		n--;
	}
	return (ptr1[i] - ptr2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
//	char	s1[] = "";
//	char	s2[] = "";
//	char    s3[] = "";
//	char    s4[] = "";
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
//	unsigned int	n;

//	n = 2;
//	printf("s1: %s\n", s1);
//	printf("s2: %s\n", s2);
//	printf("the difference is: %d\n", ft_memcmp(s1,s2,n));
  // 	printf("the difference is: %d\n", memcmp(s3,s4,n));
	printf("the difference is: %d\n", ft_memcmp(s2,s3,4));
   	printf("the difference is: %d\n", memcmp(s2,s3,4));
}
*/
